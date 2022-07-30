#include "Reservation.h"

void Reservation::Delete_Reservation(String^ R_N) {
	StreamReader^ din = File::OpenText("Data/Reservations.txt");
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	while (String^ id = din->ReadLine())
	{
		if (id == R_N)
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
	remove("Data/Reservations.txt");
	rename("Data/pin.txt", "Data/Reservations.txt");
}

String^ Reservation::search(String^ R_N) {
	bool isfound = false;
	String^ info = "";
	StreamReader^ din = File::OpenText("Data/Reservations.txt");
	while (String^ id = din->ReadLine())
	{
		if (id == "#" + R_N)
		{
			isfound = true;
			for (int i = 0; i < 6; i++)
			{
				info += (din->ReadLine() + "\r\t  ");
			}
		}
	}
	din->Close();
	if (isfound == false) {
		return "Not Found :(";
	}
	return info;
}

String^ Reservation::print() {
	String^ Path = "Data/Reservations.txt";
block:
	if (File::Exists(Path))
	{
		String^ Reservations = "";
		StreamReader^ din = File::OpenText(Path);
		int i = 1;
		while (String^ str = din->ReadLine())
		{
			if (i == 1)
			{
				str += "\r\t";
			}
			if (i == 7)
			{
				str += "\r\n\n";
				i = 0;
			}
			else
			{
				str += "\t";
			}
			Reservations = Reservations + str;
			i++;
		}
		din->Close();
		if (Reservations == "") {
			return "NO Reservations :(";
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
