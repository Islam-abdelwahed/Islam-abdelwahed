#pragma once
#include "Ticket.h"
#include <io.h>
#include "Flight.h"

using namespace System;
using namespace System::IO;
ref class Seat	:public Ticket
{
public:
	static String^ Seats = "";
	void SetSeats(String^ S_N);
	void BookSeat(String^ F_N);
	void Delete_Seat(String^ F_N);
	void IncreaseORDecrease(String^ F_N);
private:
	Flight f;
};

