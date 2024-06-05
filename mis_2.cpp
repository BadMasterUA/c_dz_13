#include<iostream>
#include<cstring>

int main()
{
    //созд. масив
    int arr_a [10];
    int arr_b [10];

    //заполнение масива
    for(int i = 0; i < (sizeof(arr_a) / sizeof(arr_a[0])); ++i)
    {
        arr_a[i] = 0;
    }

    // второй способ с доп. библеотекой (видел в книжке)
    std::memset(arr_b, 0, sizeof(arr_b)); 

    //вывод масивов
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "arr_a["<< i << "]: " << arr_a[i] << std::endl; 
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "arr_b["<< i << "]: " << arr_b[i] << std::endl; 
    }

    return 0;

}