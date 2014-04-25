#include <iostream>

int ReadNumber();
void WriteAnswer(int c);

int main()
{
	int a = ReadNumber();
	int b = ReadNumber();
	WriteAnswer(a + b);
	return 0;
}