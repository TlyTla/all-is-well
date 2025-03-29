#ifndef _VECTORT_HPP_
#define _VECTORT_HPP_

#include<vector>
#include<Windows.h>
#include<iostream>
#include<string>


template<typename T>
class VectorT
{
public:
	VectorT() {}
	static void MenuVector(const VectorT& vec);
	void PushBackVector(const T& vec)
	{
		int value;
		std::cout << "\nВведите число: \n";
		std::cin >> value;
		vec.push_back(value);
	}
	void PopBackVector(const T& vec)
	{
		vec.pop_back();
	}
	void PrintVector(const T& vec)
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
	void DeleteValueVector(const T& vec)
	{
		int value;
		std::cout << "\nВведите число которое хотите удалить: \n";
		std::cin >> value;
		vec.erase(remove(vec.begin(), vec.end(), value), vec.end());
	}
	void DeleteIndex(const T& vec)
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
	void ClearVector(const T& vec)
	{
		vec.clear();
	}
	void SortVectorMax(const T& vec)
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
	void SortVectorMin(const T& vec)
	{
		for (int i = 0; i < vec.size() - 1; i++)
		{
			for (int j = 0; j < vec.size() - i - 1; j++)
			{
				if (vec [j]< vec [j + 1])
				{
					std::swap(vec[j], vec [j + 1]);
				}
			}
		}
	}




private:
	std::vector <T> vec;
};

#endif // !_VECTORT_HPP_