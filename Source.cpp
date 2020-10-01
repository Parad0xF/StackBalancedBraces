#include <iostream>
#include "Stack.h"

using namespace std;

void checkBraces(string theString);


int main() {


	string abc = "{a{bc}";

	checkBraces(abc);

	return 0;


}

void checkBraces(string theString) {

	Stack<string> aString;
	bool balancedSoFar = true;
	int i = 0;

	while (balancedSoFar && i < theString.size()) {

		char ch = theString[i];
		i++;

		//Push an opern brace
		if (ch == '{') {
			aString.push("{");
		}
		else if (ch == '}') {

			if (!aString.isEmpty()) {
				aString.pop();
			}
			else {
				balancedSoFar = false;
			}
		}
	}

	if (balancedSoFar && aString.isEmpty()) {
		cout << "The " << theString << " has balanced braces!";
	}
	else {
		cout << "the " << theString << " does not have a balanced baraces!";
	}
}