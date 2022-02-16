#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array<int, arraySize>& angka) {
	cout << "Array : ";
	for (int &a : angka) {
		cout << a << " ";
	}
	cout << endl;
}

void printArray(array<char, arraySize>& angka) {
	cout << "Array : ";
	for (char& a : angka) {
		cout << a << " ";
	}
	cout << endl;
}

int main() {
	array<int, arraySize>angka = { 5,1,9,2,8,4,1,6,3,7 };
	array<char, arraySize>huruf = { 'z','c', 'g', 'm', 'q', 'k', 'e', 'w', 'x','o'};

	printArray(angka);
	printArray(huruf);

	// Sorting
	cout << "=== Sorted ===" << endl;
	sort(angka.begin(), angka.end());
	sort(huruf.begin(), huruf.end());
	printArray(angka);
	printArray(huruf);

	// Searching
	int numSearch;
	bool found;

	cout << "Enter a number you wish to found : ";
	cin >> numSearch; 
	cout << endl;
	found = binary_search(angka.begin(), angka.end(), numSearch);
	switch (found) {
		case true:
			cout << numSearch <<"\tIt's Found!";
			break;
		default:
			cout << numSearch << "\tIt's not Found";
	}
}