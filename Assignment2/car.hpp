#include <iostream>
#include <stdio.h>

using namespace std;

class Car
{
private: int ReleaseYear;
         const char* customer;
         int speed;

public: Car(); // Default constructor declaration
		Car(int Year, const char* cus, int velocity); // Parameterized constructor declaration
		void getReleaseYear();
		void getcustomer();
		void getspeed();
		void accelerate();
		void brake();
		~Car(); // Destructor declaration
};
