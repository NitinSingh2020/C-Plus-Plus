#include <iostream>

int ReadNumber()
{
	using namespace std;
	cout << "Enter a number:";
	int a;
	cin >> a;
	return a;
}

void WriteAnswer(int c)
{
	using namespace std;
	cout << "Sum of the numbers is: " << c << endl;
}