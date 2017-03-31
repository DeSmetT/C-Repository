//Lost Fortune
//A personalizaed adventure

#include <iostream>
#include <string>

int main()
{
	const int GOLD_PIECES = 900;
	int adventure, killed, survivors, boat, years;
	std::string leader;

	//get the information
	std::cout << "Welcome to lost Fortune" << std::endl;
	std::cin >> adventure;
	
	std::cout << "Enter the number of members in your party:";
	std::cin >> adventure;
    
	std::cout << "Enter a number, smaller than the first:";
	std::cin >> killed;
    
	survivors = adventure - killed;
	
	std::cout << "your last name:";
	std::cin >> leader;

	std::cout << "Enter a number:";
	std::cin >> years;

	std::cout << "Enter a noun:";
	std::cin >> boat;

	//The story so far.
	std::cout << "A brave group of" << adventure << "set out on a quest" << std::endl;
	std::cout << "--in search of the lost treasure of the ancient Dwarves." << std::endl;
	std::cout << "The group was led by the legendary Paladin." << leader << std::endl;

	std::cout << "Along the way, a band of maruading ogres ambushed the party." << std::endl;
	std::cout << "All fought bravely under the command of " << leader << std::endl;
	std::cout << ", and the orges were defeated, but at a cost." << std::endl;
	std::cout << "Of the adventurers, " << killed << "were vanquished, " << std::endl;

	std::cout << "leaving just" << survivors << "in the group." << std::endl;
	std::cout << "The party was about to give up all hope." << std::endl;
	std::cout << "But while laying the deceased to rest," << std::endl;
	std::cout << "they stumbled upon the buried fortune." << std::endl;
	std::cout << "So the adventurers split " << GOLD_PIECES << "gold pieces." << std::endl;
	std::cout << leader << "held on to the extra" << (GOLD_PIECES % survivors) << std::endl;
	std::cout << "pieces to keep things fair of course.";
	std::cout << "The leader" << leader << "left on the great boat" << boat << std::endl;
	std::cout << "And was not seen for" << years << "years." << std::endl;

}