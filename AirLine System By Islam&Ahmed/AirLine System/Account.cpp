#include "Account.h"
#include <io.h>

String^ Account::Search(String^ Id) {
	bool isfound = false;
	String^ info = "";
	StreamReader^ din = File::OpenText("Data/Accounts.txt");
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

void Account::signup(String^ n, String^ a, String^ e, String^ p) {
	StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream("Data/Accounts.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	Random^ RandId = gcnew Random();
	int^ x = RandId->Next(0, 10000);
	String^ filename = "Data/Users_data/#" + x->ToString() + ".txt";
	StreamWriter^ sd = gcnew StreamWriter(gcnew FileStream(filename, FileMode::Append, FileAccess::Write, FileShare::None));
	sw->Write("#" + x + "\n" + n + "\n" + p + "\n" + e + "\n" + a + "\n");
	sw->Close();
	sd->Close();
};

bool Account::SignIn(String^ u, String^ p)
{
	String^ Path = "Data/Accounts.txt";
block:
	if (File::Exists(Path))
	{
		StreamReader^ din = File::OpenText(Path);
		bool isfound = false;
		int linenum = 0, line = 0;
		while (String^ username = din->ReadLine())
		{
			linenum++;
			if (username == u)
			{
				name = u;
				String^ password = din->ReadLine();
				if (password == p)
				{
					Password = p;
					isfound = true;
					city = din->ReadLine();
					email = din->ReadLine();
					din->Close();
					StreamReader^ dil = File::OpenText(Path);
					while (line < linenum - 1)
					{
						ID = dil->ReadLine();
						line++;
					}
					dil->Close();
					break;
				}
				else {
					isfound = false;
				}
			}
			else {
				isfound = false;
			}
		}
		din->Close();
		return isfound;
	}
	else
	{
		StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
		sw->Close();
		goto block;
	}
};

void Account::Delete_Account(String^ ID) {
	StreamReader^ din = File::OpenText("Data/Accounts.txt");
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
	//--remove && rename File--//
	String^ str = "Data/Users_data/" + ID + ".txt";
	IntPtr p = Marshal::StringToHGlobalAnsi(str);
	const char* pAnsi = static_cast<const char*>(p.ToPointer());
	remove(pAnsi);
	remove("Data/Accounts.txt");
	rename("Data/pin.txt", "Data/Accounts.txt");
	Marshal::FreeHGlobal(p);
}

void Account::Edit_Account(String^ Id, String^ n, String^ e, String^ a, String^ p)
{
	StreamReader^ din = File::OpenText("Data/Accounts.txt");
	StreamWriter^ pin = gcnew StreamWriter(gcnew FileStream("Data/pin.txt", FileMode::Append, FileAccess::Write, FileShare::None));
	while (String^ id = din->ReadLine())
	{
		if (id == Id)
		{
			pin->Write(Id + "\n" + n + "\n" + p + "\n" + a + "\n" + e + "\n");
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
	remove("Data/Accounts.txt");
	rename("Data/pin.txt", "Data/Accounts.txt");
}

String^ Account::GetId()
{
	return ID;
}
String^ Account::GetName()
{
	return name;
}
String^ Account::GetEmail()
{
	return email;
}
String^ Account::GetPassword()
{
	return Password;
}
String^ Account::GetCity()
{
	return city;
}

String^ Account::print() {
	String^ Path = "Data/Accounts.txt";
block:
	if (File::Exists(Path))
	{
		String^ Accounts = "";
		StreamReader^ din = File::OpenText(Path);
		int i = 1;
		while (String^ str = din->ReadLine())
		{
			if (i == 5)
			{
				str += "\r\n\n";
				i = 0;
			}
			else
			{
				str += "\r\t\t";
			}
			Accounts = Accounts + str;
			i++;
		}
		din->Close();
		if (Accounts == "") {
			return "NO Accounts :(";
		}
		else {
			return Accounts;
		}
	}
	else
	{
		StreamWriter^ sw = gcnew StreamWriter(gcnew FileStream(Path, FileMode::Append, FileAccess::Write, FileShare::None));
		sw->Close();
		goto block;
	}
}