#include "Luggage.h"

void Luggage::SetLuggage(String^ lug1,String^ lug2) {
	 lug = System::Convert::ToInt32(lug1);
	 Ex_lug = System::Convert::ToInt32(lug2);
	 Total_Ex_lug+=System::Convert::ToInt32(lug2);
};
int Luggage::getlug() { return lug; };
int Luggage::getEx_lug(){ return Ex_lug; };
int Luggage::getSum() { return lug + Ex_lug; };
int Luggage::getTotal_Ex_lug() { return Total_Ex_lug; };