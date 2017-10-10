/*
* CamelCase.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date: 29/09/2017
* Description: Solution to the CamelCase challenge
* Copyright notice
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s{};
	int numWords{ 1 };
	
	cin >> s;

	//Iterate through the string and count uppercase characters
	for (int i = 0; i <= s.length(); i++) {
		if (::isupper(s[i])) {
			numWords++;
		}
	}
	cout << "The number of words is: " << numWords << endl;






	return 0;
}
