#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //1
    //int x;
    //cout << "Введите порядковый номер месяца: ";
    //cin >> x;
    //if (x <= 0 || x > 12)
    //{
    //    cout << "Error";
    //}
    //else if (x <= 2)
    //{
    //    cout << "Winter";
    //}
    //else if (x <= 5 && x > 2 || x == 12)
    //{
    //    cout << "Spring";
    //}
    //else if (x <= 8 && x > 5)
    //{
    //    cout << "Summer";
    //}
    //else if (x <= 11 && x > 8)
    //{
    //    cout << "Autumn";
    //}


    //2
    //int x;
    //int n = x / 10;
    //cout << "Введите число: ";
    //cin >> x;
    //if (x % 2 == 0)
    //{
    //    cout << Числе э парным";
    //}
    //else if (n * 10 + 3 == x || x == 3)
    //{
    //    cout << "Число заканчивается на 3";
    //}
    //else
    //{
    //    cout << "Число не парное и не заканчивается на 3";
    //}


    //3
    int mas[7];
    int max = 0;
    for (int i = 0; i < 7; i++)
    {
        cout << "Ввеидет число: ";
        cin >> mas[i];
        if (mas[i] > max) max = mas[i];
    }
    cout << "максимальное число: " << max;
    

}

