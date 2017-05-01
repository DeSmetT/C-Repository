#include <iostream>
#include <cstdlib>
#include <ctime>


int easyLevel()
{
	int number;
	int chances = 0;
	std::cout << "Pick a number between 1 and 5" << std::endl;
	std::cin >> number;
	do{
		chances = chances + 1;
		int randomNumber = rand(); //generate random number
		int die = (randomNumber % 5) + 1; //get a number between 1 and 10
		if (number == die)
		{

			std::cout << "I Win!" << std::endl;
			system("pause");
			return 0;
		}
		else if (number> die)
		{
			std::cout << "I chose too high" << std::endl;

		}
		else
		{
			std::cout << "I chose too low" << std::endl;
		}
		std::cout << "The Computer has used " << chances << " of 5 chances" << std::endl;

	} while (chances != 5);

	system("pause");
	return 0;

}
int mediumLevel()
{
	int number;
	int chances = 0;
	std::cout << "Pick a number between 1 and 10" << std::endl;
	std::cin >> number;
	do{
		chances = chances + 1;
		int randomNumber = rand(); //generate random number
		int die = (randomNumber % 10) + 1; //get a number between 1 and 10
		if (number == die)
		{

			std::cout << "I Win!" << std::endl;
			system("pause");
			return 0;
		}
		else if (number> die)
		{
			std::cout << "I chose too high" << std::endl;

		}
		else
		{
			std::cout << "I chose too low" << std::endl;
		}
		std::cout << "The Computer has used " << chances << " of 5 chances" << std::endl;

	} while (chances != 5);
}
int hardLevel()
{
	int number;
	int chances = 0;
	std::cout << "Pick a number between 1 and 50" << std::endl;
	std::cin >> number;
	do{
		chances = chances + 1;
		int randomNumber = rand(); //generate random number
		int die = (randomNumber % 50) + 1; //get a number between 1 and 10
		if (number == die)
		{

			std::cout << "I Win!" << std::endl;
			system("pause");
			return 0;
		}
		else if (number> die)
		{
			std::cout << "You chose too high" << std::endl;

		}
		else
		{
			std::cout << "You chose too low" << std::endl;
		}
		std::cout << "The player has used " << chances << " of 5 chances" << std::endl;

	} while (chances != 5);
}

int main()

{


	int chances = 0;
	int diffAnswer;
	int finished;
	std::cout << "What difficulty would you like, Easy1, Medium2, or Hard3?" << std::endl;
	std::cin >> diffAnswer;

	do{
		
		if (diffAnswer == 1)
		{
			easyLevel();
		}
		if (diffAnswer == 2)
		{
			mediumLevel();
		}
		if (diffAnswer == 3)
		{
			hardLevel();
		}
		chances = chances + 1;
		
		std::cout << "Are you finished? 1 for yes 2 for no";
		std::cin >> finished;
	} while (finished == 1);

}