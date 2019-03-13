//This program will calculate the price of the plane's landing fee

#include <iostream>
#include <string>
using namespace std;

int main() {

	const int SIZE = 4;

	int weight[SIZE]; //variable to store plane's weight
	string planes[SIZE]; //variable to store plane's name
	float prices[SIZE]; //variable to store the landing fee

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter name of the plane: "; //getting name of plane
		cin >> planes[i];

		cout << "Enter the weight: "; //getting weight of plane
		cin >> weight[i];

		if (weight[i] > 6000) { //checking landing fee if plane is over 6000Ibs
			int z = weight[i] / 1000;
			for (int j = 0; j < z; j++) {
				prices[i] += 1.0;
			}
		}
		else if (weight[i] > 12000) { //checking landing fee if plane is over 12000Ibs
			int z = weight[i] / 1000;
			for (int j = 0; j < z; j++) {
				prices[i] += 1.5;
			}
		}
		else { //otherwise, no landing fee
			prices[i] = 0;
		}
	}

	cout << planes[0] << ": " << prices[0] << endl; //output first plane
	cout << planes[1] << ": " << prices[1] << endl; //output second plane
	cout << planes[2] << ": " << prices[2] << endl; //output third plane
	cout << planes[3] << ": " << prices[3] << endl; //output fourth plane

	return 0;
}

