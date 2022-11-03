// S110-Fahey-Remove-Elements-From-Vector.cpp
// Author: W. Fahey
// Goal: Remove duplicate values from a vector


#include <iostream>
#include <vector>
using namespace std;


// Prototypes


int main()
{
	vector<int> original = { 11,33,22,11,44,77,66,33,55,11 };

	for (int i = 0; i < original.size(); i++) {
		int num = original[i];
		int j = i + 1;
		for (j; j < original.size(); j++) {
			if (original.at(j) == num) {
				original.erase(original.begin() + j);
			}
		}
	}
	for (int x = 0; x < original.size(); x++) {
		cout << original[x] << endl;
	}
}