#include "Airport.h"

void Airport::SetAirPortDetails(String^ code, String^ Name, String^ Address)
{
	StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream("Data/Airports.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	sw->Write("#" + code + "\n" + Name + "\n" + Address + "\n");
	sw->Close();
}

String^ Airport::print(){
	String^ Path = "Data/Airports.txt";
block:
	if (File::Exists(Path))
	{
		String^ Airports = "";
		StreamReader^ Airports_File = File::OpenText(Path);
		int i = 1;
		while (String^ str = Airports_File->ReadLine())
		{
			if (i == 3)
			{
				str = str + "\r\n\n";
				i = 0;
			}
			else
			{
				str += "\r\t\t";
			}
			Airports = Airports + str;
			i++;
		}
		Airports_File->Close();
		if (Airports == "") {
			return "NO AirPorts :(";
		}
		else {
			return Airports;
		}
	}
	else
	{
		StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
		sw->Close();
		goto block;
	}
}

String^ Airport::Search(String^ Id) {
	bool isfound = false;
	String^ info = "";
	StreamReader^ din = File::OpenText("Data/Airports.txt");
	while (String^ id = din->ReadLine())
	{
		if (id == "#" + Id)
		{
			isfound = true;
			for (int i = 0; i < 2; i++)
			{
				info += (din->ReadLine() + "\r\t\t");
			}
		}
	}
	din->Close();
	if (isfound == false) {
		return "Not Found :(";
	}
	return info;
}

void Airport::Delete_airport(String^ ID) {
	StreamReader^ din = File::OpenText("Data/Airports.txt");
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	while (String^ id = din->ReadLine())
	{
		if (id == ID)
		{
			for (int i = 0; i < 2; i++)
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
	remove("Data/Airports.txt");
	rename("Data/pin.txt", "Data/Airports.txt");
}