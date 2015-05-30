#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
	for(char ch='0'; ch <= 'z'; ch++)
		cout << ch << ": " << std::dec << static_cast<int>(ch) << " : " << std::hex << static_cast<int>(ch) << endl;

	return 0;
}
