#pragma once
#include <string>

using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
 ref class Account
{
    public:
       void Delete_Account(String^ ID);
       void signup(String^ n, String^ a, String^ e, String^ p);
       bool SignIn(String^ u, String^ p);
       void Edit_Account(String^ Id,String^ n,String^ e,String^ a,String^ p);
       String^ GetId();
       String^ GetName();
       String^ GetEmail();
       String^ GetPassword();
       String^ GetCity();
       String^ print();
       String^ Search(String^ Id);
    private:
        String^ ID;
        String^ name;
        String^ email;
        String^ Password;
        String^ city;
    };
