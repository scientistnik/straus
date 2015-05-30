#include <iostream>

using std::cout;
using std::endl;

enum Exmpl { FIRST, SECOND, LAST};
int main(int argc, char* argv[])
{
	char *ch;
	int* p;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << endl;
	cout << "short int: " << sizeof(short int) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long int: " << sizeof(long int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long double: " << sizeof(long double) << endl;
	cout << "char *: " << sizeof(ch) << endl;
	cout << "int* : " << sizeof(p) << endl;
	cout << "enum: " << sizeof(Exmpl) << endl;
}
