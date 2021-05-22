#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ano, cont = 0;
    while (cin >> ano){
        cont = ano % 100;
        if (cont == 0){
            cont = ano / 100;
            cout << cont <<endl;
        }else{
            cont = ano / 100;
            cont++;
            cout << cont <<endl;
        }
        cont = 0;
    }
    return 0;
}
