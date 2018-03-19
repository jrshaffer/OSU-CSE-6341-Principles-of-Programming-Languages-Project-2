// Joseph Shaffer
// Shaffer.567
// CSE 6341 Autumn 2017

#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include "Token.h"
#include "Helper.h"


using namespace std;



// main class
int main(int argc, char *argv[]) {
	// reads in file
	readFile();

	// initializes value of current token
	Init();

	// calls ParseExpr and Print functions 
	ParseStart();
	 
	return 0;
}




			
	
