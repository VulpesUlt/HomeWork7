// HomeWork7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <C:\Users\Vulpes\source\repos\HomeWork7\HomeWork7\mylib.h>
#include <fstream>

#define COMPARE(a, b) ((a >= 0) && (a < b) ? true : false)
#define SIZE 10

#pragma pack (push, 1)
struct empoyee
{
    short int id;
    bool freelance;
    int salaryl;
};
#pragma pack (pop)

int main()
{

    // Task 1 
    int length = 0;
    std::cout << "Enter array length for task 1: ";
    std::cin >> length;
    std::cin.clear();
    float* arrPtr = new float[length];
    hWork::initArr(arrPtr, length);
    hWork::printArr(arrPtr, length);
    std::cout << "Count of positive numbers = " << hWork::countArr(arrPtr, length, hWork::countMode::positive) << std::endl;
    std::cout << std::endl;

    // Task 2
    int numOne, numTwo;
    std::cout << "Enter the number to compare: ";
    std::cin >> numOne;
    std::cin.clear();
    std::cout << "Enter the number to compare with: ";
    std::cin >> numTwo;
    std::cin.clear();
    std::cout << "0 =< " << numOne << " < " << numTwo << " is ";
    if (COMPARE(numOne, numTwo))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    std::cout << std::endl;

    // Task 3

    int arrTaskThree[SIZE]{ 0 };
    std::cout << "Enter the array: ";
    for (int i = 0; i < SIZE; i++)
        std::cin >> arrTaskThree[i];
    hWork::sortArr(arrTaskThree, SIZE);
    hWork::printArr(arrTaskThree, SIZE);

    // Task 4
    
    empoyee* CPP = new empoyee[SIZE];
    for (int i = 0; i < SIZE; i++ )
    {
        CPP[i].id = i;
        CPP[i].freelance = rand() % 1 == 0 ? true : false;
        CPP[i].salaryl = 80'000;
    }
    std::cout << "Sise of struct:" << sizeof(*CPP) << std::endl;
    std::ofstream fin("CPP employee.txt");
    for (int i = 0; i < SIZE; i++)
    {
        fin << "Employee ID: " << CPP[i].id << std::endl;
        fin << "Works at: " << (CPP[i].freelance ? "freelance" : "office") << std::endl;
        fin << "Salary: " << CPP[i].salaryl << std::endl;
        fin << std::endl;
    }
    fin.close();
    delete[] CPP;

    std::cout << "Hello World!\n";
}
