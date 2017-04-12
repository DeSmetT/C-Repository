#include <iostream>
#include <string>
using namespace std;

int main()
{
	double tacoPrice = 0.99;
	double burritoPrice = 1.99;
	double drinkPrice = 1.50;
	double kidsMealPrice = 1.25;
	double tacoSaladPrice = 2.00;
	double kidsFriesPrice = 0.50;
	double cheeseFriesPrice = 1.00;
	double saladPrice = 1.50;
	double friedTacoPrice = 1.99;
	double supremeTacoPrice = 3.00;
	double kidsPizzaPrice = 2.50;
	int tacoOrdered = 0;
	int burritoOrdered = 0;
	int drinkOrdered = 0;
	int kidsMealOrdered = 0;
	int tacoSaladOrdered = 0;
	int kidsFriesOrdered = 0;
	int cheeseFriesOrdered = 0;
	int saladOrdered = 0;
	int friedTacoOrdered = 0;
	int supremeTacoOrdered = 0;
	int kidsPizzaOrdered = 0;
	

	const double taxRate = 1.075;

	double order, total, totalwithTax;
	double tacoTotal, burritoTotal, drinkTotal, kidsMealTotal, tacoSaladTotal, kidsFriesTotal, cheeseFriesTotal, saladTotal, kidsPizzaTotal, supremeTacoTotal, friedTacoTotal;

	std::cout << "Welcome to Delgados Tacos, where we make the dos in Delgados." << std::endl;

	cout << "Press 1 to Start!";
	cin >> order;
	if (order = 1)
	{
		cout << "How many tacos do you want?";
		cin >> tacoOrdered;
		tacoTotal = tacoOrdered * tacoPrice;
		cout << "Your total for all items entered is $" << tacoTotal << endl;

	}
	if (order = 2)
	{
		cout << "How many Burritos do you want?";
		cin >> burritoOrdered;
		burritoTotal = burritoOrdered * burritoPrice;
		cout << "Your total for all items entered is $" << burritoTotal << endl;
	}
	if (order = 3)
	{
		cout << "How many Drinks do you want?";
		cin >> drinkOrdered;
		drinkTotal = drinkOrdered * drinkPrice;
		cout << "Your total for all items entered is $" << drinkTotal << endl;
	}
	if (order = 4)
	{
		cout << "How many Kids Meals would you like want?";
		cin >> kidsMealOrdered;
		kidsMealTotal = kidsMealOrdered * kidsMealPrice;
		cout << "Your total for all items entered is $" << kidsMealTotal << endl;
	}
	if (order = 5)
	{
		cout << "How many Taco Salads would you like?";
		cin >> tacoSaladOrdered;
		tacoSaladTotal = tacoSaladOrdered * tacoSaladPrice;
		cout << "Your total for all items entered is $" << tacoSaladTotal << endl;
	}
	if (order = 6)
	{
		cout << "How many Kids Fries do you want?";
		cin >> kidsFriesOrdered;
		kidsFriesTotal = kidsFriesOrdered * kidsFriesPrice;
		cout << "Your total for all items entered is $" << kidsFriesTotal << endl;
	}
	if (order = 7)
	{
		cout << "How many Cheese Fries do you want?";
		cin >> cheeseFriesOrdered;
		cheeseFriesTotal = cheeseFriesOrdered * cheeseFriesPrice;
		cout << "Your total for all items entered is $" << cheeseFriesTotal << endl;
	}
	if (order = 8)
	{
		cout << "How many Salads do you want?";
		cin >> saladOrdered;
		saladTotal = saladOrdered * saladPrice;
		cout << "Your total for all items entered is $" << saladTotal << endl;
	}
	if (order = 9)
	{
		cout << "How many Fried Tacos do you want?";
		cin >> friedTacoOrdered;
		friedTacoTotal = friedTacoOrdered * friedTacoPrice;
		cout << "Your total for all items entered is $" << friedTacoTotal << endl;
	}
	if (order = 10)
	{
		cout << "How many Supreme Tacos do you want?";
		cin >> supremeTacoOrdered;
		supremeTacoTotal = supremeTacoOrdered * supremeTacoPrice;
		cout << "Your total for all items entered is $" << supremeTacoTotal << endl;
	}
	if (order = 11)
	{
		cout << "How many Kids Pizza do you want?";
		cin >> kidsPizzaOrdered;
		kidsPizzaTotal = kidsPizzaOrdered * kidsPizzaPrice;
		cout << "Your total for all items entered is $" << kidsPizzaTotal << endl;
	}
	
	tacoTotal = tacoOrdered * tacoPrice;
	burritoTotal = burritoOrdered * burritoPrice;
	drinkTotal = drinkOrdered * drinkPrice;
	kidsMealTotal = kidsMealOrdered * kidsMealPrice;
	tacoSaladTotal = tacoSaladOrdered * tacoSaladPrice;
	kidsFriesTotal = kidsFriesOrdered * kidsFriesPrice;
	cheeseFriesTotal = cheeseFriesOrdered * cheeseFriesPrice;
	saladTotal = saladOrdered * saladPrice;
	friedTacoTotal = friedTacoOrdered * friedTacoPrice;
	supremeTacoTotal = supremeTacoOrdered * supremeTacoPrice;
	kidsPizzaTotal = kidsPizzaOrdered * kidsPizzaPrice;

	total = tacoTotal + burritoTotal + drinkTotal;

	cout << "Your total for the meal is $" << total << "\n Thank you for shopping at \nDelgados Tacos, come again!";
	system("pause");
	return 0;
}

