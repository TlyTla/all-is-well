#include "VectorT.hpp"
#include "main.cpp"

template<typename T>
inline void VectorT<T>::MenuVector(const VectorT& vec)
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
			main();
		}
		else if (number1 == "1")
		{
			VectorT::PushBackVector(const T& vec);
		}
		else if (number1 == "2")
		{
			VectorT::PopBackVector(const T& vec);
		}
		else if (number1 == "3")
		{
			VectorT::PrintVector(const T& vec);
		}
		else if (number1 == "4")
		{
			VectorT::DeleteValueVector(const T& vec);
		}
		else if (number1 == "5")
		{
			VectorT::DeleteIndex(const T& vec);
		}
		else if (number1 == "6")
		{
			VectorT::ClearVector(const T& vec);
		}
		else if (number1 == "7")
		{
			VectorT::SortVectorMax(const T& vec);
		}
		else if (number1 == "8")
		{
			VectorT::SortVectorMin(const T& vec);
		}
		else
		{
			std::cout << "������ �����\n\n";
			system("pause");
		}
	}
}



