//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//2 1 4 3 5

#include "t07_swap.h"
#include <iostream>


using namespace std;

int t07_swap() {
    int n;
    std::cin >> n;
    std::vector<int>mas(n);
    
    for (int i = 0; i < mas.size(); i++)
        std::cin >> mas[i];
   
    for (int i = 1; i < mas.size(); i+=2)
        std::swap(mas[i],mas[i-1]);
    
    for (auto i:mas)
        std::cout << i << " ";

    return 0;
}
