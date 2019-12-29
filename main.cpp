//Программа которая переводит галлоны в литры
#include <iostream>
using namespace std;

int main()
{
    int gallons, liters;
    cout <<"Введите количество галлонов:";
    cin >> gallons; //Ввод данных от пользователя
    liters = gallons * 4; //Преобразовываю галлоны в литры
    cout <<"Литров: " <<liters;
    return 0;
}