#include <limits>
#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char* argv[])
{
	cout << "char: " << "min= " << static_cast<int>(std::numeric_limits<char>::min()) << " max= " << static_cast<int>(std::numeric_limits<char>::max()) << endl;
	cout << "short: " << "min= " << std::numeric_limits<short>::min() << " max= " << std::numeric_limits<short>::max() << endl;
	cout << "int: " << "min= " << std::numeric_limits<int>::min() << " max= " << std::numeric_limits<int>::max() << endl;
	cout << "long: " << "min= " << std::numeric_limits<long>::min() << " max= " << std::numeric_limits<long>::max() << endl;
	cout << "float: " << "min= " << std::numeric_limits<float>::min() << " max= " << std::numeric_limits<float>::max() << endl;
	cout << "double: " << "min= " << std::numeric_limits<double>::min() << " max= " << std::numeric_limits<double>::max() <<endl;
	cout << "long double: " << "min= " << std::numeric_limits<long double>::min() << " max= " << std::numeric_limits<long double>::max() << endl;
	cout << "unsigned: " << "min= " << std::numeric_limits<unsigned>::min() << " max= " << std::numeric_limits<unsigned>::max() << endl;

	return 0;
}
