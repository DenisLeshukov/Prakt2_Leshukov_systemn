
#include <iostream>
using namespace std;
//3
struct Computer {
    char brand[255];
    char model[255];
    double price;
};

int main()
{
    Computer comps[3];
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " Comp" << endl;
        std::cout << "Brand:"<< endl;
        std::cin >> comps[i].brand;
        std::cout << "Model:" << endl;
        std::cin >> comps[i].model;
        std::cout << "Price:" << endl;
        std::cin >> comps[i].price;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (comps[j].price < comps[j + 1].price)
            {
                Computer tmp = comps[j];
                comps[j] = comps[j + 1];
                comps[j + 1] = tmp;

            }
       }
        
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i+1 << " Comp"<< endl << " Brand: " << comps[i].brand << endl << "Model: " << comps[i].model << endl << "Price: " << comps[i].price << endl;
    }

}


