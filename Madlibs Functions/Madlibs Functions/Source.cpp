#include <iostream>
#include <string>


void tellStory()
{
	std::string name; std::string noun; std::string number; std::string bodyPart; std::string verb;
	std::cout << "\nHere's your story: ";
	std::cout << "The famous explorer ";
	std::cin >> name;
	std::cout << " had nearly given up a life-long quest to find\n";	
}
void theCity()
{
	std::string noun;
	std::cout << "The Lost City of ";
	std::cin >> noun;
	std::cout << " when one day, the ";
	std::cout << noun;
    std::cout << " found the explorer.\n";
}
void theMonster()
{
	std::string name; std::string noun; std::string number; std::string bodyPart; std::string verb;
	std::cout << "Surrounded by ";
	std::cin >> number;
	std::cout << " " << noun;
	std::cout << ", a tear came to ";
	std::cout << name << " 's ";
	std::cin >> bodyPart + ".\n";
}
void theEnd()
{
	std::string name; std::string noun; std::string number; std::string bodyPart; std::string verb;
	std::cout << "After all this time, the quest wwas finally over. ";
	std::cout << "And then, the ";
	std::cout << noun << "\n";
	std::cout << "promptly devoured";
	std::cout << name << ". ";
	std::cout << "The moral of the story? Be careful what you ";
	std::cin >> verb;
	std::cout << " for.";
}
int main()
{
	tellStory(); 
	theCity();
	theMonster();
	theEnd();
	system("pause");
	return 0;
}