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

	static void MenuVector(const VectorT& obj);

	void PushBackVector();
	
	void PopBackVector();
	
	void PrintVector();
	
	void DeleteValueVector();
	
	void DeleteIndex();

	void ClearVector();
	
	void SortVectorMax();

	void SortVectorMin();

private:
	std::vector <T> vec;
};

#endif // !_VECTORT_HPP_