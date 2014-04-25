#include <iostream>

// int ReadNumber();
// void WriteAnswer(int c);

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

int main()
{
	int a = ReadNumber();
	int b = ReadNumber();
	WriteAnswer(a + b);
}

