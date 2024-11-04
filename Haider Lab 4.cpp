#include <iostream>
using namespace std;
int main()
{
	//NAME HAIDER ALI
	//ROLL NO L1F24BSCS0190


	//Task 1
	int num = 13;
	cout << "Variable Value: " << num << endl;

	//Task 2

	int n1 = 0;
	cout << "Enter Variable Value= ";
	cin >> n1;
	cout << "Variable Value Entered = " << n1 << endl;

	//Task 3
	int n2 = 1;
	 
	cout << "Enter value of First Variable= ";
	cin >> n2;

	int n3 = 2;
	cout << "Enter value of Second Variable= ";
	cin >> n3;
	
	cout << "Sum of Values = " << n2 + n3 << endl;
	cout << "Difference of Values= " << n2 - n3 << endl;
	cout << "Product of Values= " << n2 * n3 << endl;
	cout << "Division of Values = " << n2 / n3 << endl;

	//Task 4

	int n = 12;
	cout << "Enter your Number For Table = ";
	cin >> n;
	cout << n << " x1= " << n * 1 << endl;
	cout << n << " x2= " << n * 2 << endl;
	cout << n << " x3= " << n * 3 << endl;
	cout << n << " x4= " << n * 4 << endl;
	cout << n << " x5= " << n * 5 << endl;
	cout << n << " x6= " << n * 6 << endl;
	cout << n << " x7= " << n * 7 << endl;
	cout << n << " x8= " << n * 8 << endl;
	cout << n << " x9= " << n * 9 << endl;
	cout << n << " x10= " << n * 10 << endl;

	//Task 5

	int number = 9;
	int number2 = 1;
	int number3 = 2;
	 
	cout << "Enter Value of Fuel = " ;
	cin >> number;
	cout << "Enter Value of Rent = " ;
	cin >> number2;
	cout << "Enter Value of Bills = ";
	cin >> number3;

	cout << "FUEL : " << number << endl;
	cout << "RENT : " << number2 << endl;
	cout << "BILLS : " << number3 << endl;
	cout << "TOTAL : " << number + number2 + number3 << endl;

//Task 6
	int n5 = 9;
	int n6 = 1;
	int n7 = 2;

	cout << "Enter Value of Math = ";
	cin >> n5;
	cout << "Enter Value of Chemistry = ";
	cin >> n6;
	cout << "Enter Value of Physics = ";
	cin >> n7;

	cout << "-------------------------------------"<<endl;
	cout << "Maths\tChemistry\tPhysics" << endl;
	cout << n5<<"\t"<<n6 <<"\t\t"<< n7 << endl;
	cout << "-------------------------------------" << endl;

	//Task 7
	int a1 = 1;
	int a2 = 2;
	int b1 = 3;
	int b2 = 4;
	int c1 = 5;
	int c2 = 6;

	cout << "Enter Price of Wheat = ";
	cin >> a1;
	cout << "Enter Quantity of Wheat = ";
	cin >> a2;
	cout << "Enter Price of Rice = ";
	cin >> b1;
	cout << "Enter Quantity of Rice = ";
	cin >> b2;
	cout << "Enter Price of Sugar= ";
	cin >> c1;
	cout << "Enter Quantity of Sugar= ";
	cin >> c2;

	cout << "-------------------------------------" << endl;
	cout << "Value of Wheat = "<<a1*a2 << endl;
	cout << "Value of Rice = " << b1 * b2 << endl;
	cout << "Value of Sugar = " << c1 * c2 << endl;
		
	cout << "-------------------------------------" << endl;

	return 0;
}