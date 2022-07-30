#pragma once

using namespace System;
interface class Passenger
{
	void setPassenger(String^ FN, String^ LN, String^ id, String^ Cls, String^ phone, String^ age);
	static String^ FirstName;
	static String^ LastName;
	static String^ ID;
	static String^ Class;
	static String^ Phone;
	static String^ Age;
};

