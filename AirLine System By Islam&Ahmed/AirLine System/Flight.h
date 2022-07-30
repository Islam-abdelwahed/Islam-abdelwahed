#pragma once
#include <string>//--To Convert System::String to const char*--//
#include "Plane.h"
#include <io.h>

using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
ref class Flight
{
public:
    void  Delete_flight(String^ F_N);
    bool CheckFlightNumber(String^ ID, String^ F_N, String^ T_N);
    String^ GetS_N();
    String^ Search(String^ F_N);
    String^ Search(String^ from, String^ to, String^ date);
    String^ print();
    void Add_Flight(String^ Departure, String^ Destination, String^ price, String^ Departure_Date, String^ plane );
    String^ GetF_n();
    String^ GetDeparture();
    String^ GetDestination();
    String^ GetDate();
    String^ print(String^ F_N);
    int GetAvailableTickets();
    int GetPrice();
    String^ GetPlane();
private:
   static String^ S_N;
   static String^ F_n;
   static String^ Departure;
   static String^ Destination;
   static String^ Date;
   static String^ Price;
   static String^ AvailableTickets;
   static String^ plane;

};