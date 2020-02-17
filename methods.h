																					//  Header file of Methods
#include <iostream>
#include <string>
#include <algorithm>

/* Definition of a class Command 
 * which will have all the methods */
 class Command 
 {
	 private:
	 int counter;
	 char** vector ;
	 
	 public:
	 Command (int x , char** y);
	void print() ;
	void reverse();
	void upper();
	void shuffleWord();
	void shuffleStatement();
	 
 };