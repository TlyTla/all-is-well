#include "VectorT.hpp"
#include "main.cpp"

template<typename T>
inline void VectorT<T>::MenuVector(const VectorT& obj)
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
			obj.PushBackVector();
		}
		else if (number1 == "2")
		{
			obj.PopBackVector();
		}
		else if (number1 == "3")
		{
			obj.PrintVector();
		}
		else if (number1 == "4")
		{
			obj.DeleteValueVector();
		}
		else if (number1 == "5")
		{
			obj.DeleteIndex();
		}
		else if (number1 == "6")
		{
			obj.ClearVector();
		}
		else if (number1 == "7")
		{
			obj.SortVectorMax();
		}
		else if (number1 == "8")
		{
			obj.SortVectorMin();
		}
		else
		{
			std::cout << "Ошибка ввода\n\n";
			system("pause");
		}
	}
}

template<typename T>
void VectorT<T>::PushBackVector()
{
	int value;
	std::cout << "\nВведите число: \n";
	std::cin >> value;
	vec.push_back(value);
}

template<typename T>
void VectorT<T>::PopBackVector()
{
	vec.pop_back();
}

template<typename T>
void VectorT<T>::PrintVector()
{
	if (vec.size() == 0)
	{
		std::cout << "\nВуктор пуст.\n";
	}
	else
	{
		std::cout << "\nid\tСодержимое\n";
		for (int i = 0; i < vec.size(); i++)
		{
			std::cout << i + 1 << "\t" << vec[i] << "\n";
		}
	}
}

template<typename T>
void VectorT<T>::DeleteValueVector()
{
	int value;
	std::cout << "\nВведите число которое хотите удалить: \n";
	std::cin >> value;
	vec.erase(remove(vec.begin(), vec.end(), value), vec.end());
}

template<typename T>
void VectorT<T>::DeleteIndex()
{
	int id;
	std::cout << "\nВведите id для удаления: ";
	std::cin >> id;

	if (id > 0 && id < vec.size()) {
		vec.erase(vec.begin() + id - 1);
		std::cout << "Элемент удален" << std::endl;
	}
	else {
		std::cout << "Плохое id" << std::endl;
	}
}

template<typename T>
void VectorT<T>::ClearVector()
{
	vec.clear();
}

template<typename T>
void VectorT<T>::SortVectorMax()
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			if (vec[j] > vec[j + 1])
			{
				std::swap(vec[j], vec[j + 1]);
			}
		}
	}
}

template<typename T>
void VectorT<T>::SortVectorMin()
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			if (vec[j] < vec[j + 1])
			{
				std::swap(vec[j], vec[j + 1]);
			}
		}
	}
}



