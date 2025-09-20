#include <iostream>
//2

int main()
{
    int n = 4;
    
    
    int matrix[4][4] = {     {1, 2, 3, 4}
                            ,{5,6,7, 8}
                            ,{9,10,11,12} ,
                             {13,14,15,16} };
    
    for (int i = 0; i < n; i++)
    {
        int tmp = matrix[i][i];
        matrix[i][i] = matrix[i][n - 1 - i];
        matrix[i][n - 1 - i] = tmp;

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout<< std:: endl;
        
    }
    
}
