#include "VectorT.hpp"
#include "main.cpp"

template<typename T>
inline void VectorT<T>::MenuVector(const VectorT& vec)
{
	while (true)
	{
		std::string number1;

		system("cls");
		std::cout << "1 - Заполнить вектор. \n2 - Убрать последний элемент вектора.\n3 - Что находится в векторе.\n4 - Вырезать элемент по значению.\n5 - Вырезать элемент по индексу."
			<< "\n6 - Очистить вектор.\n7 - Отсортировать вектор по возрвстанию.\n8 - Отсортировать вектор по убыванию.\n0 - Вернуться.\n\nЧто будем делать : ";
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
			std::cout << "Ошибка ввода\n\n";
			system("pause");
		}
	}
}



