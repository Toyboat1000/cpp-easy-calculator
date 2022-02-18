#include <iostream>
using namespace std;
#include <cmath>
#include <fstream>



int main() {

	int Val1, Val2;
	string Action;

	cout << "Options: * + / - " << endl;
	cin >> Action;

	if (Action == "*")
	{
		cout << "First Number: ";
		cin >> Val1;
		cout << "Second Number: ";
		cin >> Val2;

		cout << Val1 * Val2 << endl;
	}

	if (Action == "+")
	{
		cout << "First Number: ";
		cin >> Val1;
		cout << "Second Number: ";
		cin >> Val2;

		cout << Val1 + Val2 << endl;
	}

	if (Action == "-")
	{
		cout << "First Number: ";
		cin >> Val1;
		cout << "Second Number: ";
		cin >> Val2;

		cout << Val1 - Val2 << endl;
	}

	if (Action == "/")
	{
		cout << "First Number: ";
		cin >> Val1;
		cout << "Second Number: ";
		cin >> Val2;

		cout << Val1 / Val2 << endl;
	}

	//if (Action == "/" && "+")
	//cout << "Error wrong key" << endl;

	cout << "Closing Program" << endl;

	return 0;
}
