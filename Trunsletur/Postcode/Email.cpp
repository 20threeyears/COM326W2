/*
* Email.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date: 29/09/2017
* Description: Solution to the check for valid emails challenge
* Copyright notice
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;
	
string email{};

//Forward declaration of function
bool IsEmailValid(string email);

int main() {

	string email;
	bool valid{ 0 };
	do {
		cout << "Please enter an email address: ";
		cin >> email;

		if (IsEmailValid(email)) {
			cout << "Thank you" << endl;
			valid = true;
		}
	} while (valid != true);
	
	return 0;	
}

bool IsEmailValid(string email) {
	
	//Define a regular expression for the email address
	const std::regex pattern
	("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

	// try to match the string against the regular expression
	return std::regex_match(email, pattern);
}