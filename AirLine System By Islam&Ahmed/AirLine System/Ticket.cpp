#include "Ticket.h"
#include<io.h>

void Ticket::SetTickets(String^ B_D, String^ S_N, String^ Expiry_Date,int R_N){
	Ticket t;
	Tickets += "\r\t\t\t\t\tB_D:" + B_D + "\r\n\t\t\t\t\tName:" + Passenger::FirstName + " " + Passenger::LastName + "\r\n\n\nT_N:" + t.T_N + "\r\nR_N:" + R_N + "\r\nS_N:" + S_N + "\r\nFrom/To\tFlight\tCL\tDate\t\t\tNVA\t\t\tLUG\tST\r\n" + f.GetDeparture() + "\t" + f.GetF_n() + "\t" +Passenger::Class + "\t" + f.GetDate() + "\t" + Expiry_Date + "\t" + Ticket::getSum() + "\tOK\r\ngate:" + t.G_N1 + "\r\n" + f.GetDestination() + "\r\ngate:" + t.G_N2 + "\r\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\r\n\n";

};

void Ticket::BookTicket(String^ ID) {
		StreamWriter^ UT = gcnew StreamWriter(gcnew FileStream(("Data/Users_data/" + ID + ".txt"), FileMode::Append, FileAccess::Write, FileShare::None));
		UT->Write(Tickets);
		UT->Close();
		Tickets = "";
}

void Ticket::Delete_Ticket(String^ ID, String^ T_N) {
	StreamReader^ din = File::OpenText(("Data/Users_data/" + ID + ".txt"));
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/Users_data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	unsigned int lnum = 0;
	unsigned int lnum2 = 0;
	while (String^ id = din->ReadLine())
	{
		if (id == "T_N:" + T_N)
		{
			din->Close();
			StreamReader^ fin = File::OpenText(("Data/Users_data/" + ID + ".txt"));
			while (String^ id = fin->ReadLine()) {
				if (lnum2 == (lnum - 5))
				{
					for (int i = 0; i < 15; i++)
					{
						fin->ReadLine();
					}
				}
				else
				{
					pin->Write(id + "\n");
				}
				lnum2++;
			}
			fin->Close();
			break;
		}
		lnum++;
	}
	pin->Close();
	//--remove && rename File--//
	String^ str = "Data/Users_data/" + ID + ".txt";
	IntPtr p = Marshal::StringToHGlobalAnsi(str);
	const char* pAnsi = static_cast<const char*>(p.ToPointer());
	remove(pAnsi);
	rename("Data/Users_data/pin.txt", pAnsi);
	Marshal::FreeHGlobal(p);
}

String^ Ticket::search(String^ ID, String^ T_N) {
	StreamReader^ din = File::OpenText(("Data/Users_data/" + ID + ".txt"));
	String^ info = "";
	bool isfound = false;
	unsigned int lnum = 0;
	unsigned int lnum2 = 0;
	while (String^ id = din->ReadLine())
	{
		if (id == "T_N:" + T_N)
		{
			isfound = true;
			din->Close();
			StreamReader^ fin = File::OpenText(("Data/Users_data/" + ID + ".txt"));
			while (String^ id = fin->ReadLine()) {
				if ((lnum2) == (lnum - 5))
				{
					for (int i = 0; i < 12; i++)
					{
						info += fin->ReadLine() + "\r\n";
					}
					fin->Close();
					break;
				}
				lnum2++;
			}
			break;
		}
		lnum++;
	}
	if (isfound == false) {
		return "Not Found :(";
	}
	return info;
}


String^ Ticket::print(String^ ID) {
	String^ Path = "Data/Users_data/" + ID + ".txt";
block:
	if (File::Exists(Path))
	{
	String^ Reservations = "";
		StreamReader^ din = File::OpenText(Path);
		while (String^ str = din->ReadLine())
		{
			Reservations += str + "\r\n";
		}
		din->Close();
		if (Reservations == "") {
			return "NO TICKETS :(";
		}
		else {
			return Reservations;
		}
	}
	else
	{
	StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
	sw->Close();
	goto block;
	}
}

void Ticket::setPassenger(String^ FN, String^ LN, String^ id, String^ Cls, String^ phone, String^ age)
{
	Passenger::FirstName = FN;
	Passenger::LastName = LN;
	Passenger::ID = id;
	Passenger::Class = Cls;
	Passenger::Phone = phone;
	Passenger::Age = age;
}
