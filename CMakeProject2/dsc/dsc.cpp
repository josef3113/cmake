#include "dsc.h"
#include "iostream"

void dsc::DscTest::print_dsc()
{
	std::cout << "dsc print " << std::endl;
}

int dsc::DscTest::foint()
{
	return 0;
}

void dsc::DscTest::print_dsc_twice()
{
	this->print_dsc();
	this->print_dsc();
}
