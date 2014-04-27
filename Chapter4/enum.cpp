#include <iostream>

int main()
{
	using namespace std;
	enum Color
	{
		COLOR_BLACK,
		COLOR_RED,
		COLOR_BLUE,
		COLOR_GREEN,
		COLOR_WHITE,
		COLOR_CYAN,
		COLOR_YELLOW,
		COLOR_MAGENTA,
	};

	Color eColor = COLOR_WHITE;
	cout << eColor << endl;

	return 0;
}
