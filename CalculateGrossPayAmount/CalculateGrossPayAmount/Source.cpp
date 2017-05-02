#include <iostream>
#include <string>


double addition(double hoursWorked, double payRate)
{
	double r;
	r = hoursWorked + payRate;
	return r;

}

int main()
{
	double gross;
	double hoursWorked, rateOfPay;
	std::cout << "Enter hours worked-";
	std::cin >> hoursWorked;
	std::cout << "Enter pay rate-";
	std::cin >> rateOfPay;
	gross = addition(hoursWorked, rateOfPay);
	std::cout << "You make" << gross;
	system("pause");
	return 0;

}


