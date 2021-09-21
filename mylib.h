#pragma once
namespace hWork{
	enum class countMode { positive, negative, zero };
	
	bool initArr(float*, int);
	bool printArr(float*, int);
	bool printArr(int*, int);
	int countArr(float*, int, countMode);
	void sortArr(int*, int);
}