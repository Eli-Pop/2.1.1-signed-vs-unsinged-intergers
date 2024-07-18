#include <iostream>
/*
* This program shows the difference between
* signed and unsiged integers.
*/
using namespace std;

int main()
{
	short int i; // a signed short integer
	short unsigned int j; // an unsigned short integer.

	/*
	* 60,000 is with the range of an unsigened short int, but is
	* typically outside the range of a signed int. Thus, it will
	* be interpreted as a negative value when assigned to i.
	*/
	j = 60000;
	i = j;
	cout << i << " " << j;

	cout << "\n";
	system("pause");
	return 0;
}