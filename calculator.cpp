#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
	
	double angle;
	cout << "Enter angle value:";
	cin >> angle;
	
	trig cal(angle);
	
	cout << "\nThe answer is " << cal.findSum() << endl;
}
