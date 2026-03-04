// Ride-Sharing Trip Fare Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Trip
{
private:
	float distance_km;
	float rate_per_km;

public:
	Trip()
	{
		distance_km = 0;
		rate_per_km = 12.5;
	}

	void set_distance_km(float dist)
	{
		if (dist >= 0)
		{
			distance_km = dist;
		}
		else
		{
			cout << "Invalid distance!" << endl;

		}
	}
	void set_rate_per_km(float rate)
	{

		if (rate > 0)
		{
			rate_per_km = rate;
		}
		else
		{
			cout << "Invalid rate!" << endl;
		}

	}
	float get_fare()
	{
		return distance_km * rate_per_km;


	}

};


int main()
{

	Trip trip;

	cout.setf(ios::fixed); cout.precision(2);

	float dist, rate;
	
	cout << "Enter distance: ";

	cin >> dist;

	cout << "Enter rate: ";

	cin >> rate;

	trip.set_distance_km(dist);
	trip.set_rate_per_km(rate);


	cout << "Rate: " << trip.get_fare() << endl;

	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
