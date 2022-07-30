#pragma once
#include "Luggage.h"
#include "Flight.h"
#include "Passenger.h"

using namespace System;
using namespace System::IO;

ref class Ticket :public Luggage, public Passenger
	{
	public:
		static String^ Tickets = "";
		void SetTickets(String^ B_D, String^ S_N, String^ Expiry_Date,int R_N);
		Random^ Randnum = gcnew Random();
		int^ T_N = Randnum->Next(0, 1000000);
		int^ G_N1 = Randnum->Next(1, 15);
		int^ G_N2 = Randnum->Next(1, 15);
		void BookTicket(String^ ID);
		void Delete_Ticket(String^ ID, String^ T_N);
		String^ search(String^ ID, String^ T_N);
		Flight f;
		DateTime^ dt = DateTime::Now;
		String^ BookDate = dt->ToString("ddd/MMMM/yy, hh:mm:ss tt");
		String^ print(String^ ID);
		virtual void setPassenger(String^ FN, String^ LN, String^ id, String^ Cls, String^ phone, String^ age);
};


