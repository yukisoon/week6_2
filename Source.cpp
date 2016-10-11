#include <iostream>
#include <string>

//template progrmming
//let your comipler generate codes for you automatically

template<class T_INPUT_TYPE>
void print(const T_INPUT_TYPE& v)
{
	std::cout << v << std::endl;
}

/*
void print(const int& v)//void printInterger(const int& v)
{
	std::cout << v << std::endl;
}

void print(const float& v)
{
	std::cout << v << std::endl;
}

void printe(const double& v)
{
	std::cout << v << std::endl;
}

void print(const std::string& v)
{
	std::cout <<v << std::endl;
}
*/


int main()
{
	/*printInterger(1);
	printFloat(2.123f);
	printDouble(2.123456);
	printString("String");*/

	//function overloading
	print(1);
	print(2.123f);
	print(2.123456);
	print("String");

	return 0;
}

