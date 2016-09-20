// file: counter multiplier.cpp
// written by: alex
// purpose: multiply numbers and display in columns

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << "counter multiplier" << endl;

	for (int i = 1; i < 5; i++)
	{
		cout << setw(4) << i;
		for (int j = 0; j < 10; j++)
		{
			cout << setw(4) <<  i * j;
		}
		cout << endl;
	}

	return 0;
}
