#include <iostream>
#include <C:\Users\Vulpes\source\repos\HomeWork7\HomeWork7\mylib.h>

#define intSWAP(a, b) int buf; buf = a; a = b; b = buf;


namespace hWork {
	bool initArr(float* arrPtr, int length)
	{
		if (arrPtr != nullptr)
		{
			for (int i = 0; i < length; i++)
				arrPtr[i] = rand() % 101;
			return true;
		}
		return false;
	}

	bool printArr(float* arrPtr, int length)
	{
		if (arrPtr != nullptr)
		{
			for (int i = 0; i < length; i++)
				std::cout << "elem[" << i << "] " << arrPtr[i] << "  ";
			std::cout << std::endl;
			delete[] arrPtr;
			return true;
		}
		return false;
	}

	bool printArr(int* arrPtr, int length)
	{
		if (arrPtr != nullptr)
		{
			for (int i = 0; i < length; i++)
				std::cout << "elem[" << i << "] " << arrPtr[i] << "  ";
			std::cout << std::endl;
			return true;
		}
		return false;
	}

	int countArr(float* arrPtr, int length, countMode mode)
	{
		int counter = 0;
		switch (mode)
		{
		case countMode::positive:
			for (int i = 0; i < length; i++)
				if (arrPtr[i] > 0)
					counter++;
		case countMode::negative:
			for (int i = 0; i < length; i++)
				if (arrPtr[i] < 0)
					counter++;
		case countMode::zero:
			for (int i = 0; i < length; i++)
				if (arrPtr[i] == 0)
					counter++;
		}
		return counter;
	}

	void sortArr (int* arr, int length)
	{
		bool sorted = false;
		while (!sorted)
		{
			sorted = true;
			for (int i = 1; i < length; i++)
				if (arr[i] < arr[i - 1])
					{
						intSWAP(arr[i], arr[i - 1]);
						sorted = false;
					}
		}
	}




}