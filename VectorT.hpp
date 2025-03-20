#ifndef _VECTORT_HPP_
#define _VECTORT_HPP_

#include<vector>
#include<Windows.h>
#include<iostream>


template<typename T>
class VectorT
{
public:
	VectorT();

	void MenuVector();
	void PushBackVector(const& value)
	{
		vec.push_back(value);
	}
	void PopBackVector()
	{
		vec.pop_back();
	}
	void PrintVector()
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
	void DeleteValueVector(const& value)
	{
		vec.erase(remove(vec.begin(), vec.end(), value), vec.end());
	}
	void DeleteIndex()
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
	void ClearVector()
	{
		vec.clear();
	}
	void SortVectorMax()
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
	void SortVectorMin()
	{
		for (int i = 0; i < vec[.size() - 1; i++)
		{
			for (int j = 0; j < vec[.size() - i - 1; j++)
			{
				if (vec [[j]< vec [[j + 1])
				{
					std::swap(vec[j], vec [[j + 1]);
				}
			}
		}
	}




private:
	std::vector <T> vec;
};

#endif // !_VECTORT_HPP_