#include "car.hpp"

#include <iostream>
#include <stdio.h>
using namespace std;

Car::Car()
{
	// Set the default values to Car variables
    ReleaseYear = 0;
    customer = "";
    speed = 0;
}

void Car::getReleaseYear()
{
	// Print the ReleaseYear
    cout<<"ReleaseYear :"<<ReleaseYear<<"\n";           
}

void Car::getcustomer()
{
	// Print Car maker
    cout<<"Car maker :"<<customer<<"\n";
}

void Car::getspeed()
{
	// Print Current speed
    cout<<"Current speed :"<<speed<<"\n";
}

void Car::accelerate()
{
	// Increase speed by 10 units
    speed += 10;
}

void Car::brake()
{
	// Decrease speed by 10 units
    speed -= 10;
}

Car::~Car()
{
	 // Destructor definition
}


int main()
{
    Car Audi;

    for(int i=0; i<5; i++)
    {
        Audi.accelerate();
    }

    Audi.getspeed();

    for(int i=0; i<5; i++)
    {
        Audi.brake();
    }

    Audi.getspeed();

    return 0;
}
