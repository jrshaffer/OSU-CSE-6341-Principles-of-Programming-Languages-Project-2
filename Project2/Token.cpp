#include <iostream>
#include "Token.h"
using namespace std;

// Member functions for token class
void Token::setType(const string & tokenType) {
	type = tokenType;
}

void Token::setAtom(const string & atomType) {
	atom = atomType;
}

void Token::setValue(const string & count) {
	value = count;
}

string Token::getType() const {
	return (type);
}

string Token::getAtom() const{
	return (atom);
}

string Token::getValue() const {
	return value;
}
