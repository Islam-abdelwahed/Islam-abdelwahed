#pragma once
#include<io.h>

using namespace System;
using namespace System::IO;
ref class Airport
{
public:
    void SetAirPortDetails(String^ code, String^ Name, String^ Address);
    String^ print();
    String^ Search(String^ Id);
    void Delete_airport(String^ ID);
};