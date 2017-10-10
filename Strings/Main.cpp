/*
* Main.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date: 29/09/2017
* Description: Solution to the string comparision challenge
* Copyright notice
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string s1, s2, answer;

	cout << " Please enter a string: \t";
	getline(cin, s1);

	cout << " Please enter another string: \t";
	getline(cin, s2);
		
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	if (s1 == s2) {
		cout << "\n This pleases Chuck Norris!" << endl;
	}
	else {
		cout << "\n I pity the fool" << endl;
	}

	//Check to see if 
	if (s1.find("holiday") != std::string::npos || s1.find("belize") != std::string::npos || 
		s2.find("holiday") != std::string::npos || s2.find("belize") != std::string::npos){
		cout << "\n Are you a secret agent?" << endl;
		getline(cin, answer);
		if (answer.find("yes") != std::string::npos) {
			int test = 2;
			cout << "BANG!" << endl;
		}

	}

	return 0;
}

void PrintMessage() {

	

}