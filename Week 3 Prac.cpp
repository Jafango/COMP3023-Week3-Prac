// Week 3 Prac.cpp : Defines the entry point for the application.
//

#include "Week 3 Prac.h"
#include <iostream>
#include <string>

using namespace std;

class Pie {
	public:
		virtual string description() = 0;
};

class ApricotPie : public Pie {
	public:
		string description() 
		{
			return "Apricot Pie";
		}
};

class ApplePie : public Pie {
public:
	string description()
	{
		return "Apple Pie";
	}
};

class RaspberryPie : public Pie {
public:
	string description()
	{
		return "Raspberry Pie";
	}
};

int main()
{
	ApplePie ap;
	ApricotPie acp;
	RaspberryPie rp;
	std::cout << ap.description() << std::endl;
	std::cout << acp.description() << std::endl;
	std::cout << rp.description() << std::endl;

	//Activity 2
	Pie* piePtr = NULL;
	int selection = 0;
	std::cout << "1 - Apple Pie, 2 - Raspberry Pie, 3 - Apricot Pie" << std::endl;
	std::cout << "Enter a choice (1 - 3): ";
	std::cin >> selection; //read from the keyboard
	std::cout << std::endl;
	std::cout << "You chose " << selection << std::endl;

	if (selection == 1) { piePtr = new ApplePie(); }
	else if (selection == 2) { piePtr = new RaspberryPie(); }
	else { piePtr = new ApricotPie(); }
	std::cout << piePtr->description();
	return 0;
}

