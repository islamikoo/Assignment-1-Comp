#include "methods.h"

using namespace std ;

//                								Definitions

Command::Command(int x , char** y)
{
	counter = x ;
	vector = y ;
}


void Command::print()
{
	for(int i=1; i<counter ; i++)
		cout << vector[i] << " " ;
	cout << endl ;
}

void Command::reverse()
{
	for(int i=counter-1; i>0 ; i--)
		cout << vector[i] << " " ;
	cout << endl ;
}