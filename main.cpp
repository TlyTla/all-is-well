#include "VectorT.hpp"

#include<iostream>
#include<Windows.h>

VectorT<int> a;
VectorT<double> c;
VectorT<std::string> z;

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
		std::cout << "1 - ������ int.\n2 - ������ double.\n3 - ������ std::string.\n";
		std::cout << "� ��� ����� ��������: ";
		std::cin>> number;

		if (number == "1")
		{
			a.MenuVector(a);
		}
		else if (number == "2")
		{
			c.MenuVector(c);
		}
		else if (number == "3")
		{
			z.MenuVector(z);
		}
		else
		{
			std::cout << "�������� ����!!!!!\n";
			system("pause");
			system("cls");
		}
	}
}
