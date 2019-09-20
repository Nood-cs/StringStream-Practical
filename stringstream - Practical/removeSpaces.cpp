//Removing spaces from a string using Stringstream
/*
Sample Input:
	This is a test
	geeks for geeks
	geeks quiz is awesome!
	I love to code
Sample Output:
	Thisisatest
	geeksforgeeks
	geeksquizisawsome!
	Ilovetocode

Steps:
1- store all the string in a stringstream
2- empty the string
3- assign token by token to the empty string/without spaces
*/

#include<iostream>
#include<sstream>
using namespace std;

string removeSpaces(string str) {
	stringstream ss;
	string temp;

	ss << str;
	str = "";

	while (!ss.eof()) {
		ss >> temp;
	
		str += temp;

		temp = "";
	}

	return str;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();//because getline function treats a (enter) as an input.
	for (int i = 0; i < t; i++) {
		string str;
		getline(cin, str);
		cout << removeSpaces(str) << endl;
	}

	system("pause");
	return 0;
}