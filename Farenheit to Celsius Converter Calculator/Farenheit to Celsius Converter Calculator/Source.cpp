#include <iostream>
#include <string>
using namespace std;

int main()
{
	double Fahren8am, Farhen12pm, Farhen5pm;
	double Celsius8am, Celsius12pm, Celsius5pm;
    
	cout << "What is the temperature in Celsius at 8 AM:";
	cin >> Celsius8am;

	cout << "What is the temperature in Celsius at 5 PM:";
	cin >> Celsius12pm;

	cout << "What is temperature in Celsius at 5 PM:";
	cin >> Celsius5pm;

	Fahren8am = Celsius8am * 1.8 + 32;
	Farhen12pm = Celsius12pm * 1.8 + 32;
	Farhen5pm = Celsius5pm * 1.8 + 32;

	cout << "The temperature at 8:00 AM in Fahrenheit is-" << Fahren8am << endl;
	cout << "The temperature at 12:00 PM in Fahrenheit is-" << Farhen12pm << endl;
	cout << "The temperature at 5:00 PM in Fahrenheit is-" << Farhen5pm << endl;
	system("pause");
	return 0;

}