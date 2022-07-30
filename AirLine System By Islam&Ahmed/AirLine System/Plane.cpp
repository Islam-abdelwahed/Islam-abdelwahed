#include "Plane.h"

void Plane::SetPlaneDetails(String^ code, String^ Type, String^ Name, String^ Model, String^ N_O_S) {
	StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream("Data/Planes.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	sw->Write("#" + code+ "\n" + Type + "\n" + Name + "\n" + Model + "\n" + N_O_S + "\n");
	sw->Close();
};

String^ Plane::print() {
	String^ Path = "Data/Planes.txt";
block:
	if (File::Exists(Path))
	{
		String^ Planes = "";
		StreamReader^ Planes_File = File::OpenText(Path);
		int i = 1;
		while (String^ str = Planes_File->ReadLine())
		{
			if (i == 5)
			{
				str += "\r\n\n";
				i = 0;
			}
			else if (i == 2 || i == 3 || i == 4)
			{
				str += "\r\t\t";
			}
			else
			{
				str += "\r\t\t";
			}
			Planes = Planes + str;
			i++;
		}
		Planes_File->Close();
		if (Planes == "") {
			return "NO Planes :(";
		}
		else {
			return Planes;
		}
	}
	else
	{
		StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
		sw->Close();
		goto block;
	}
}

String^ Plane::Search(String^ Id) {
	bool isfound = false;
	String^ info = "";
	StreamReader^ din = File::OpenText("Data/Planes.txt");
	while (String^ id = din->ReadLine())
	{
		if (id == "#" + Id)
		{
			isfound = true;
			for (int i = 0; i < 4; i++)
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

void Plane::Delete_plane(String^ ID) {
	StreamReader^ din = File::OpenText("Data/Planes.txt");
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	while (String^ id = din->ReadLine())
	{
		if (id == ID)
		{
			for (int i = 0; i < 4; i++)
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
	remove("Data/Planes.txt");
	rename("Data/pin.txt", "Data/Planes.txt");
}

int Plane::GetN_O_S(String^ Plane) {
	String^ Path = "Data/Planes.txt";
block:
	if (File::Exists(Path))
	{
	bool isfound = false;
	StreamReader^ din = File::OpenText(Path);
	while (String^ id = din->ReadLine())
	{
		if (id == Plane)
		{
			break;
		}
	}
	int  NOF = System::Convert::ToInt32(din->ReadLine());
	din->Close();
	return NOF;
	}
	else
	{
		StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
		sw->Close();
		goto block;
	}
}
