#include <iostream>
//1
int main()
{
    int arr[5] = { 1,6,3,7,5 }; 
    int min = INT_MAX;
    int max = 0;
    int position_min = 0;
    int position_max = 0;
    //максимальное и его положение
    for (int i = 0; i < std::size(arr); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            position_max = i;
        }
    }
    //минимальное и его положение
    for (int i = 0; i < std::size(arr); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            position_min = i;
        }
    }
    //замена
    arr[position_max] = min;
    arr[position_min] = max;

    for (int i = 0; i < std::size(arr); i++)
    {
        std::cout << arr[i];
    }
    
    
}


