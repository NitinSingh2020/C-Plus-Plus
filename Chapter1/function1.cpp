#include <iostream>

void DoPrint() 
{
	using namespace std;
	cout << "In DoPrint()" << endl;
}

int main() 
{
	using namespace std;
	cout << "Starting main()" << endl;
	DoPrint();
	cout << "Ending main()" << endl;
	return 0;
}

