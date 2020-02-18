#include <iostream>
#include <string>
#include "methods.h"

using namespace std;

int main(int argc , char** argv)
{
	Command a(argc,argv);
	/*a.print();
	a.reverse();
	a.upper();
	a.shuffleWord();
	a.shuffleStatement();
	a.Delete();
	a.Middle();*/
	a.Add();
	return 0;
}