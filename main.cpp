#include "VectorT.hpp"


void Start();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Start();

	return 0;
}

void Start()
{
	while (true)
	{
		std::string number;
		std::cout << "1 - ������ int.\n1 - ������ double.\n1 - ������ std::string.\n";
		std::cout << "� ��� ����� ��������: ";
		std::getline(std::cin, number);

		if (number == "1")
		{
			VectorT<int> a;
			VectorT<int>::MenuVector(a);
		}
		else if (number == "2")
		{
			VectorT<double> b;
			VectorT<double>::MenuVector(b);
		}
		else if (number == "3")
		{
			VectorT<std::string> z;
			VectorT<std::string>::MenuVector(z);
		}
		else
		{
			std::cout << "�������� ����!!!!!";
		}
	}
}
