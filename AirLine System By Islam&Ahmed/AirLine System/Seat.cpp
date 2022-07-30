#include "Seat.h"

void Seat::SetSeats(String^ S_N) {
	Seats += "#" + S_N + "\t->\t" + Ticket::T_N + "\t" + Passenger::ID + "\t" + Passenger::FirstName + " " + Passenger::LastName + "\t" + Passenger::Class + "\t" + Ticket::getSum() + "\t" + Passenger::Phone + "\t" + Passenger::Age + "\n";
}

void Seat::BookSeat(String^ F_N){
	StreamWriter^ sd = gcnew StreamWriter(gcnew FileStream("Data/Flights_data/" + F_N + ".txt", FileMode::Append, FileAccess::Write, FileShare::None));
	sd->Write(Seats);
	sd->Close();
	Seats = "";
}

void Seat::Delete_Seat(String^ F_N) {
	StreamReader^ Gin = File::OpenText("Data/Flights_data/" + F_N + ".txt");
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/Flights_data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	while (String^ line = Gin->ReadLine())
	{
		array<String^>^ StringArray = line->Split('-');
		if (StringArray[0] == "#" + f.GetS_N() + "\t")
		{

		}
		else {
			pin->Write(line + "\n");
		}
	}
	Gin->Close();
	pin->Close();
	//--remove && rename File--//
	String^ str = "Data/Flights_data/" + F_N + ".txt";
	IntPtr p2 = Marshal::StringToHGlobalAnsi(str);
	const char* pAnsi2 = static_cast<const char*>(p2.ToPointer());
	remove(pAnsi2);
	rename("Data/Flights_data/pin.txt", pAnsi2);
	Marshal::FreeHGlobal(p2);
}

void Seat::IncreaseORDecrease(String^ F_N) {
	Plane n;
	int x = 0;
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	StreamReader^ din = File::OpenText("Data/Flights_data/" + F_N + ".txt");
	while (String^ id = din->ReadLine())
	{
		x++;
	}
	din->Close();
	int p = n.GetN_O_S(f.GetPlane()) - x+2;
	StreamReader^ fin = File::OpenText("Data/Flights.txt");
	while (String^ id = fin->ReadLine())
	{
		if (id == "#" + F_N)
		{
			pin->Write(id + "\n");
			for (int i = 0; i < 5; i++) {
				pin->Write(fin->ReadLine() + "\n");
			}
			fin->ReadLine();
			pin->Write(System::Convert::ToString(p) + "\n");
		}
		else {
			pin->Write(id + "\n");
		}
	}
	pin->Close();
	fin->Close();
	remove("Data/Flights.txt");
	rename("Data/pin.txt", "Data/Flights.txt");
}
