#include <iostream>
#include <string>

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

	const double taxRate = 1.075;

	double tacoOrdered, burritoOrdered, drinkOrdered, kidsMealOrder, tacoSaladOrdered, kidsFriesOrder, cheeseFriesOrder, saladOrder, friedTacoOrder, kidsPizzaOrder, supremeTacoOrder,total, totalwithTax;
	double tacoTotal, burritoTotal, drinkTotal, kidsMealTotal, tacoSaladTotal, kidsFriesTotal, cheeseFriesTotal, saladTotal, kidsPizzaTotal, supremeTacoTotal, friedTacoTotal;

	std::cout << "Welcome to Delgados Tacos, where we make the does in Delgados." << std::endl;

	std::cout << "How many Taco's do you want?" << std::endl;
	std::cin >> tacoOrdered;

	std::cout << "How many burritos do you want?" << std::endl;
	std::cin >> burritoOrdered;

	std::cout << "How many Drinks do you want?" << std::endl;
	std::cin >> drinkOrdered;

	std::cout << "How many Kids Meals would you like?" << std::endl;
    std::cin >> kidsMealOrder;
	
	std::cout << "How many taco salads would you like?" << std::endl;
	std::cin >> tacoSaladOrdered;

	std::cout << "How many Kids Fries would you like?" << std::endl;
	std::cin >> kidsFriesOrder;

	std::cout << "How many Cheese Fries would you like?" << std::endl;
	std::cin >> cheeseFriesOrder;

	std::cout << "How many Salads would you like?" << std::endl;
	std::cin >> saladOrder;
	
	std::cout << "How many Fried Tacos would you like?" << std::endl;
	std::cin >> friedTacoOrder;
	
	std::cout << "How many Supreme tacos would you like?" << std::endl;
	std::cin >> supremeTacoOrder;


	tacoTotal = tacoOrdered * tacoPrice;
	burritoTotal = burritoOrdered * burritoPrice;
	drinkTotal = drinkOrdered * drinkPrice;
	kidsMealTotal = kidsMealOrder * kidsMealPrice;
	tacoSaladTotal = tacoSaladOrdered * tacoSaladPrice;
	kidsFriesTotal = kidsFriesOrder * kidsFriesPrice;
	cheeseFriesTotal = cheeseFriesOrder * cheeseFriesPrice;
	saladTotal = saladOrder * saladPrice;
	friedTacoTotal = friedTacoOrder * friedTacoPrice;
	supremeTacoTotal = supremeTacoOrder * supremeTacoPrice;

	total = tacoTotal + burritoTotal + drinkTotal;

	std::cout << "Your total for all items entered is $" << total << std::endl;
}

