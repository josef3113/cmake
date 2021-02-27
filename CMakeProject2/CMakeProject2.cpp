// CMakeProject2.cpp : Defines the entry point for the application.
//

#include "CMakeProject2.h"
#include "dsc.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	dsc::DscTest t;
	cout << t.foint() << endl;
	t.print_dsc_twice();
	return 0;
}
