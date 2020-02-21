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
	if(counter>2)
	{
		for(int i=2; i<counter ; i++)
		cout << vector[i] << " " ;
	cout << endl ;
	}
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::reverse()
{
	if(counter>2)
	{
		for(int i=counter-1; i>1 ; i--)
			cout << vector[i] << " " ;
		cout << endl ;
	}
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::upper()
{
	if(counter>2)
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
	else 
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::shuffleWord()
{
	if(counter == 2)
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
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::shuffleStatement()
{
	if(counter>2)
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
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::Delete()
{
	if(counter>2 && stoi(string(vector[2])) < (counter-2))
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
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::Middle()
{
	if(counter > 2)
	{
		if(counter%2==0)
			cout << vector[counter/2] << " " << vector[counter/2 + 1] << " " ;
		else
			cout << vector[counter/2 + 1] << " ";
		cout << endl ;
	}
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::Add()
{
	if(counter>2)
	{
		int sum=0;
		for(int i=2; i<counter ; i++)
			sum += stoi(string(vector[i]));
		cout << sum << endl ;
	}
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::Random()
{
	if(counter==6)
	{
		srand(stoi(string(vector[5])));
		for(int i=0; i<stoi(string(vector[2])) ; i++)
			cout << rand() % (stoi(string(vector[4] )) - stoi(string(vector[3])) + 1) + stoi(string(vector[3])) << " " ;
		cout << endl ;
	}
	else
		cout << "Incorrect Number of Arguments" << endl;
}

void Command::Execute()
{
	if(counter>1)
	{
		string temp(vector[1]);
		if(temp == "print")
			this->print();
		else if(temp == "reverse")
			this->reverse();
		else if(temp == "upper")
			this->upper();
		else if(temp == "shuffleWord")
			this->shuffleWord();
		else if(temp == "shuffleStatement")
			this->shuffleStatement();
		else if(temp == "delete")
			this->Delete();
		else if(temp == "middle")
			this->Middle();
		else if(temp == "add")
			this->Add();
		else if(temp == "random")
			this->Random();
		else
			cout << "Undefined Command" << endl;
	}
	else 
		cout << "Incorrect Number of Arguments" << endl; 
}