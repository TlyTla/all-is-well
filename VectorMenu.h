#ifndef _VECTORMENU_H_
#define _VECTORMENU_H_
#include "VectorT.hpp"
#include<vector>
#include<Windows.h>
#include<iostream>
#include<string>
class VectorMenu
{
public:
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
};

#endif // !_VECTORMENU_H_