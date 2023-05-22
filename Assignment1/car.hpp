#include <iostream>
#include <stdio.h>

using namespace std;

class Car
{
private: int ReleaseYear;
         const char* customer;
         int speed;

public: void setter(int Year, const char* cus, int velocity);
		void getReleaseYear();
		void getcustomer();
		void getspeed();
		void accelerate();
		void brake();
};
