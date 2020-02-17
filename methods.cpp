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
	for(int i=2; i<counter ; i++)
		cout << vector[i] << " " ;
	cout << endl ;
}

void Command::reverse()
{
	for(int i=counter-1; i>1 ; i--)
		cout << vector[i] << " " ;
	cout << endl ;
}

void Command::upper()
{
	for(int i=2; i<counter ; i++)
	{
		for(int j=0; j<50; j++)
		{
			cout << char(tolower(vector[i][j])) ;
			if(vector[i][j] == '\0')
				break;
		}
		cout << " " ;
	}
	cout << endl ;
}