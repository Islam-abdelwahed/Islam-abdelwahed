#pragma once
#include<io.h>

using namespace System;
using namespace System::IO;
ref class Plane
{
public:
    void SetPlaneDetails(String^ code, String^ Type, String^ Name, String^ Model, String^ N_O_S);
    String^ print();
    String^ Search(String^ Id);
    void Delete_plane(String^ ID);
    int GetN_O_S(String^ Plane);
private:
    String^ N_O_S;
    String^ Name;
};