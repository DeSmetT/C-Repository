#include <iostream>
#include <string>
#include <math.h>

int main()
{
	std::string missingSide;
	double sideB, sideC, sideA, answer;
	
	std::cout << "Which Side is Missing on the Triangle?(a b or c)" << std::endl;
	std::cin >> missingSide;
	
	if (missingSide == "a");
	{
		std::cout << "What is the Length of Side B" << std::endl;
		std::cin >> sideB;
		
		std::cout << "What is the Length of Side C" << std::endl;
		std::cin >> sideC;

		answer = sqrt(sideB + sideC);
		std::cout << "The Length of the missing side is " << answer << std::endl;	
	}
	system("pause");
	return 0;
	if (missingSide == "b");
	{
		std::cout << "What is the Length of Side A" << std::endl;
		std::cin >> sideA;

		std::cout << "What is the Length of Side C" << std::endl;
		std::cin >> sideC;

		answer = sqrt(sideA + sideC);
		std::cout << "The Length of the missing side is " << answer << std::endl;
	}
	system("pause");
	return 0;
	if (missingSide == "c");
	{
		std::cout << "What is the Length of Side A" << std::endl;
		std::cin >> sideA;

		std::cout << "What is the Length of Side B" << std::endl;
		std::cin >> sideB;

		answer = sqrt(sideA + sideB);
		std::cout << "The Length of the missing side is " << answer << std::endl;
	}
	system("pause");
	return 0;
}






