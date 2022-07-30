#pragma once

using namespace System;
ref class Luggage
{
public:
	void SetLuggage(String^ lug1, String^ lug2);
	int getlug();
	int getEx_lug();
	int getTotal_Ex_lug();
	int getSum();
	static	int Total_Ex_lug;
private:
static	int lug;
static	int Ex_lug;
};

