#include "Flight.h"

String^ Flight::print() {
	String^ Path = "Data/Flights.txt";
block:
	if (File::Exists(Path))
	{
	String^ Flights="";
	StreamReader^ Flights_File = File::OpenText(Path);
	int i = 1;
	while (String^ str = Flights_File->ReadLine())
	{
		if (i == 7)
		{
			str += "\r\n\n";
			i = 0;
		}
		else if (i == 6)
		{
			str += "\r\t   ";
		}
		else if (i == 1)
		{
			str += "\r\t";
		}
		else if (i == 5)
		{
			str += "\r\t   ";
		}else
		{
			str += "\r\t";
		}
		Flights = Flights + str;
		i++;
	}
	Flights_File->Close();
	if (Flights == "") {
		return "NO Flights :(";
	}
	else {
		return Flights;
	}
}
	else
	{
	StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
	sw->Close();
	goto block;
	}
}

void Flight::Add_Flight(String^ Departure, String^ Destination, String^ price, String^ Departure_Date, String^ plane) {
	Plane n;
	StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream("Data/Flights.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	Random^ RandId = gcnew Random();
	int^ x = RandId->Next(0, 10000);
	StreamWriter^ sd = gcnew StreamWriter(gcnew FileStream("Data/Flights_data/" + x->ToString() + ".txt", FileMode::Append, FileAccess::Write, FileShare::None));
	sw->Write("#" + x + "\n" + Departure + "\n" + Destination + "\n" + Departure_Date + "\n" + price + "\n" + plane + "\n"+n.GetN_O_S(plane)+"\n");
	sd->Write(plane+"\n\n");
	sw->Close();
	sd->Close();
};

String^ Flight::Search(String^ from, String^ to, String^ date) {

	int linenum = 0, nLine = 0;
	StreamReader^ din = File::OpenText("Data/Flights.txt");
	while (String^ line = din->ReadLine())
	{
		if (line == from)
		{
			linenum++;
			if (din->ReadLine() == to)
			{
				linenum++;
				if (din->ReadLine() == date)
				{
					StreamReader^ lin = File::OpenText("Data/Flights.txt");
					while (String^ line = lin->ReadLine())
					{
						if (nLine == linenum - 3)
						{
							for (int i = 0; i < 4; i++) {
								line += "\r\t" + lin->ReadLine();
							}
							return line;
						}
						nLine++;
					}
					lin->Close();
				}
			}
		}
		linenum++;
	}
	din->Close();
	return "We are unable to find recommendations for your search.\r\n\nPlease change your search criteria and resubmit the search.";
}

String^ Flight::Search(String^ F_N) {
	bool isfound = false;
	String^ info = "";
	StreamReader^ din = File::OpenText("Data/Flights.txt");
	while (String^ id = din->ReadLine())
	{
		if (id == "#" + F_N)
		{
			F_n = F_N;
			isfound = true;
			for (int i = 0; i < 6; i++)
			{
				id = din->ReadLine();
				info += (id + "\r\t");
				switch (i)
				{
				case 0:
					Departure = id;
					break;
				case 1:
					Destination = id;
					break;
				case 2:
					Date = id;
					break;
				case 3:
					Price = id;
					break;
				case 4:
					plane = id;
				case 5:
					AvailableTickets = id;
					break;
				}
			}
		}
	}
	din->Close();
	if (isfound == false) {
		return "Not Found :(";
	}
	else {
		return info;
	}
}

void Flight::Delete_flight(String^ F_N) {
	StreamReader^ din = File::OpenText("Data/Flights.txt");
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	while (String^ id = din->ReadLine())
	{
		if (id == "#"+F_N)
		{
			for (int i = 0; i < 6; i++)
			{
				din->ReadLine();
			}
		}
		else
		{
			pin->Write(id + "\n");
		}
	}
	pin->Close();
	din->Close();
	//--remove && rename File--//
	String^ str = "Data/Flights_data/" + F_N + ".txt";
	IntPtr p = Marshal::StringToHGlobalAnsi(str);
	const char* pAnsi = static_cast<const char*>(p.ToPointer());
	remove(pAnsi);
	Marshal::FreeHGlobal(p);
	remove("Data/Flights.txt");
	rename("Data/pin.txt", "Data/Flights.txt");
}

bool Flight::CheckFlightNumber(String^ ID, String^ F_N, String^ T_N) {
	bool isfound = false;
	StreamReader^ acc = File::OpenText(("Data/Users_data/" + ID + ".txt"));
	while (String^ id = acc->ReadLine())
	{
		if (id == "T_N:" + T_N)
		{
			acc->ReadLine();
			S_N = acc->ReadLine();
			array<String^>^ StringArray = S_N->Split(':');
			S_N = StringArray[1];
			break;
		}
	}
	acc->Close();
	StreamReader^ din = File::OpenText("Data/Flights.txt");
	while (String^ str = din->ReadLine()) {
		if (str == "#" + F_N)
		{
			isfound = true;
			break;
		}
		isfound = false;
	}
	din->Close();
	if (isfound) {
		StreamReader^ fin = File::OpenText("Data/Flights_data/" + F_N + ".txt");
		isfound = false;
		plane = fin->ReadLine();
		while (String^ str = fin->ReadLine()) {
			array<String^>^ StringArray = str->Split('-');
			if (StringArray[0] == "#" + S_N + "\t")
			{
				fin->Close();
				return true;
				break;
			}
		}
		fin->Close();
		if (isfound == false) {
			return false;
		}
	}
	else
	{
		return false;
	}
}
String^ Flight::GetS_N() {
	return S_N;
}
String^ Flight::GetF_n(){
	return F_n;
};
String^ Flight::GetDeparture(){
	return Departure;
};
String^ Flight::GetDestination(){
	return Destination;
};
String^ Flight::GetDate(){
	return Date;
};
int Flight::GetPrice(){
	int P = System::Convert::ToInt32(Price);
	return P;
};
String^ Flight::GetPlane() {
	return plane;
}
int Flight::GetAvailableTickets() {
	int P = System::Convert::ToInt32(AvailableTickets);
	return P;
};

String^ Flight::print(String^ F_N) {
	String^ Path = "Data/Flights_data/" + F_N + ".txt";
block:
	if (File::Exists(Path))
	{
		String^ info = "";
		StreamReader^ din = File::OpenText(Path);
		while (String^ id = din->ReadLine())
		{
			info += id + "\r\n";
		}
		din->Close();
		return info;
	}
	else
	{
		StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
		sw->Close();
		goto block;
	}

}