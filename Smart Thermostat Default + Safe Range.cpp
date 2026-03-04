// Smart Thermostat Default + Safe Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Thermostat
{
private:

    int temperature;

public:

    Thermostat()
    {
        temperature = 0;
    }
    void set_temperature(int temp)
    {
        if (temp >= 16 && temp <= 30)
        {
            temperature = temp;
        }
        else
        {
            cout << "Invalid temperature!" << endl;
        }

    }
    int get_temperature()
    {
        return temperature;

    }

};

int main()
{
    Thermostat room;

    int new_temp;

    cout << "Enter temperature: ";
    cin >> new_temp;

    room.set_temperature(new_temp);

    cout << "Current Temperature: " << room.get_temperature() << endl;



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
