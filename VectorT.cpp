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
		std::cout << "1 - Заполнить вектор. \n2 - Убрать последний элемент вектора.\n3 - Что находится в векторе.\n4 - Вырезать элемент по значению.\n5 - Вырезать элемент по индексу."
			<< "\n6 - Очистить вектор.\n7 - Отсортировать вектор по возрвстанию.\n8 - Отсортировать вектор по убыванию.\n0 - Вернуться.\n\nЧто будем делать : ";
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
			std::cout << "Ошибка ввода\n\n";
			system("pause");
		}
	}
}



