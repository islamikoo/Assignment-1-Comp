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
		int j=0;
		while(vector[i][j] != '\0')
		{
			cout << char(tolower(vector[i][j])) ;
			j++;
		}
		cout << " " ;
	}
	cout << endl ;
}

void Command::shuffleWord()
{
	int j=0;
	while(vector[2][j] != '\0' && vector[2][j+1] != '\0')
		{
			cout << vector[2][j+1] << vector[2][j] ;
			j+=2;
		}
		if(vector[2][j+1] == '\0')
			cout << vector[2][j];
	cout << endl;
}

void Command::shuffleStatement()
{
	int i=2;
	while(i<(counter-2))
		{
			cout << vector[i+1] << " " <<vector[i] << " " ;
			i+=2;
		}
	if(counter%2 == 1)
		cout << vector[i];
	else
		cout << vector[i+1] << " " << vector[i] << " " ;
	cout << endl;
}

void Command::Delete()
{
	int location = stoi(string(vector[2]));
	for(int i=3; i<counter ; i++)
	{
		if(location+2 == i)
			continue;
		cout << vector[i] << " " ;
	}
	cout << endl ;
}

void Command::Middle()
{
	if(counter%2==0)
		cout << vector[counter/2] << " " << vector[counter/2 + 1] << " " ;
	else
		cout << vector[counter/2 + 1] << " ";
	cout << endl ;
}

void Command::Add()
{
	int sum=0;
	for(int i=2; i<counter ; i++)
		sum += stoi(string(vector[i]));
	cout << sum << endl ;
}

void Command::Random()
{
	srand(stoi(string(vector[5])));
	for(int i=0; i<stoi(string(vector[2])) ; i++)
		cout << rand() % stoi(string(vector[4] )) + stoi(string(vector[3])) << " " ;
	cout << endl ;
}
