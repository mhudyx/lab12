#include <iostream>
using namespace std;


int main() {
	float tempF;
	cout << "Podaj temp. w st Fahrenheita:";
	cin >> tempF;
	int tempC = (tempF - 32) * (5.0/9.0);
	cout << "Temperatura " << tempF << "F, wynosi " << tempC << "C " ;
	
	
	return 0;
}
