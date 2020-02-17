#include <iostream>
#include <string>
#include "methods.h"

using namespace std;

int main(int argc , char** argv)
{
	Command a(argc,argv);
	/*a.print();
	a.reverse();
	a.upper();*/
	a.shuffleWord();
	return 0;
}