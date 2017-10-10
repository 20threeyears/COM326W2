/*
* Caesar.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date: 29/09/2017
* Description: Solution to the Caesar Cipher challenge
* Copyright notice
*/

#include <iostream>
#include <string>

using namespace std;

//Forward declarations
string EncodeMessage(string message, int cipher);
string DecodeMessage(string message, int cipher);

int main() {
	string uncodedMessage, codedMessage;
	int k;
	k = 2;

	codedMessage = "";
	
	cout << "Please enter your message to encode: ";
	getline(cin, uncodedMessage);

	cout << "\n Shift by: ";
	cin >> k;

	codedMessage = EncodeMessage(uncodedMessage, k);

	//codedMessage = DecodeMessage(uncodedMessage, k);

	cout << "Coded message is: " << codedMessage << endl;

	return 0;
}


string EncodeMessage(string message, int cipher) {

	string codedMessage, c;
	int index = 0;

	//Create a string iterator for the coded message
	string::const_iterator iterator{ message.begin() };

	//Now iterate through the message
	while (iterator != message.end()) {
		
		//Get the ASCII value
		int asciiValue = (int)message[index];
		//Determine if it is an A-Z or a-z characther
		if (asciiValue >= 65 && asciiValue <= 90) {
			//We have an A=Z so shift by
			asciiValue += cipher;
			//If we have gone past Z loop back to A
			if (asciiValue > 90)
				asciiValue -= 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		//Determine if it is an A-Z or a-z characther
		else if (asciiValue >= 97 && asciiValue <= 122) {
			//We have an A=Z so shift by
			asciiValue += cipher;
			//If we have gone past z loop back to a
			if (asciiValue > 122)
				asciiValue -= 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		else {
			//We must have a number or symbol
			c = message[index];
			codedMessage.append(c);
		}

		
		
		++iterator; //advance iterator to the next character
		++index;
	}

	return codedMessage;
}

string DecodeMessage(string message, int cipher) {

	string codedMessage, c;
	int index;

	//Using a for loop this time just to shake things up
	for (index = 0; index <= message.length() - 1; index++) {
	
		//Get the ASCII value
		int asciiValue = (int)message[index];
		//Determine if it is an A-Z or a-z characther
		if (asciiValue >= 65 && asciiValue <= 90) {
			//We have an A=Z so shift by
			asciiValue -= cipher;
			//If we have gone past A go forward to Z
			if (asciiValue <65)
				asciiValue += 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		//Determine if it is an A-Z or a-z characther
		else if (asciiValue >= 97 && asciiValue <= 122) {
			//We have an A=Z so shift by
			asciiValue -= cipher;
			//If we have gone past a go forward to a
			if (asciiValue <97)
				asciiValue += 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		else {
			//We must have a number or symbol
			c = message[index];
			codedMessage.append(c);
		}

	}

	return codedMessage;

}