#pragma once
#include "Passenger.h"
#include "Ticket.h"
#include <io.h>
#include <string>

using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
ref class Reservation
{
public:
	String^ print();
	void Delete_Reservation(String^ R_N);
	String^ search(String^ R_N);
};

