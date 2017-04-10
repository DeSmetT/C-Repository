#include <iostream>
#include <string>

int main()
{
	int eggsRemaining, dozenEggs, eggsOrdered;
	double dozenTotalPrice, singleEggTotalPrice,total;
	double dozenPrice = 2.00;

	std::cout << "How many Eggs would you like:";
	std::cin >> eggsOrdered;

	dozenEggs = eggsOrdered / 12;
	eggsRemaining = eggsOrdered % 12;
	dozenTotalPrice = dozenEggs * dozenPrice;
	singleEggTotalPrice = eggsRemaining * 0.25;
	
	std::cout << "You have" << dozenEggs << " dozen eggs" << std::endl;
	std::cout << "You have" << eggsRemaining << "eggs left" << std::endl;
	std::cout << "Your price is-" << singleEggTotalPrice + dozenTotalPrice << std::endl;
	system("pause");
	return 0;

	
	
	    
}