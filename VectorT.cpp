#include "VectorT.hpp"

template<typename T>
VectorT<T>::VectorT()
{

}

template<typename T>
inline void VectorT<T>::MenuVector()
{
	while (true)
	{
		std::string number1;

		system("cls");
		std::cout << "1 - ��������� ������. \n2 - ������ ��������� ������� �������.\n3 - ��� ��������� � �������.\n4 - �������� ������� �� ��������.\n5 - �������� ������� �� �������."
			<< "\n6 - �������� ������.\n7 - ������������� ������ �� �����������.\n8 - ������������� ������ �� ��������.\n0 - ���������.\n\n��� ����� ������ : ";
		std::cin >> number1;

		if (number1 == "0")
		{
			Start();
		}
		else if (number1 == "1")
		{
			FillingVector();
		}
		else if (number1 == "2")
		{
			DeleteLastElements();
		}
		else if (number1 == "3")
		{
			PrintVector();
		}
		else if (number1 == "4")
		{
			DeleteValue();
		}
		else if (number1 == "5")
		{
			DeleteId();
		}
		else if (number1 == "6")
		{
			DeleteVector();
		}
		else if (number1 == "7")
		{
			SortVectorMax();
		}
		else if (number1 == "8")
		{
			SortVectorMin();
		}
		else
		{
			std::cout << "������ �����\n\n";
			system("pause");
		}
	}
}



