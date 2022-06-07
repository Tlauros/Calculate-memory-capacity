#include <iostream>

using namespace std;

int main() {
	float g, gw;
	cout << "welcome to Calculate memory capacity program :) " << endl;
	cout << "coded by tlauros " << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Enter your memory:";
	cin >> g;
	gw = g * (1 / 1.024) * (1 / 1.024) * (1 / 1.024);
	cout << "Your real memory:" << gw << endl;
}
