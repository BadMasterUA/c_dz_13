#include<iostream>

int main()
{
    char arr[3][3] = {{'0','X','0'},
                     {'X','0','X'},
                     {'0','X','0'}
                     }; // массив 3х3 в итоге дает игровое поле в 9 клеток

    // вывод масива
    for (int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl; // переводит на новую строку, что бы не выводились в строчку 
    }
    return 0;
}