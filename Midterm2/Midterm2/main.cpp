/*
James Chandler sec 006 skybayc@gmail.com
Description: The objective is to write a function that inputs a string by reference and changes all
'A's to 'Z's. (Only Capitals).
*/

/*
Test case 1:
Expected Output:
Result:
*/

// Do not add any includes
#include <iostream>
#include <string>

using namespace std;

void CapitalAToZ(string& stringToChange) {
	//int foundCapitalAHere = 0;

	for (int i = 0; i < stringToChange.length(); ++i) {
		if (stringToChange.at(i) == 'A') {
			stringToChange.at(i) = 'Z';
		}
	}
}

// Do not change anything below here

int main() {
	string aLine;

	cout << "Please give the input string: ";
	getline(cin, aLine);
	cout << endl;
	AToZ(aLine);

	cout << "The A to Z string is: " << aLine;

	return 0;
}
