//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int t06_quad() {
    double a, b, c;
    cin >> a >> b >> c;
    if (b*b - 4*a*c == 0){
        cout << (-b)/(2*a);
    }else if (b*b - 4*a*c > 0){
        cout << (-b - sqrt(b*b - 4*a*c))/(2*a) << ' ' << (-b + sqrt(b*b - 4*a*c))/(2*a);
    }
   
