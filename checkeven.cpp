#include<iostream>
using namespace std;
// create function
int checkeven (int a);

// define function
int checkeven(int a) {
	if (a % 2 == 0)
		cout << "a is even" << endl;
	else
		cout << "a is odd" << endl;
	return 0;
}

int main() {
	int a = 0;
	cout << "Key in a number : ";
	cin >> a;
	checkeven(a);
	return 0;
}