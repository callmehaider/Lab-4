#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cout << "Enter duration in years=";
	cin >> n;
	cout << "Approximate Duration" << endl;
	cout << "Months: " << n * 12 << endl;
	cout << "Days: " << n * 365 << endl;
	cout << "Hours: " << n * 365 * 24 << endl;


	return 0;
}