// Week 3 Prac.cpp : Defines the entry point for the application.
//

#include "Week 3 Prac.h"

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
	return 0;
}

