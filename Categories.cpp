#include <iostream>
#include <conio.h>

using namespace std;

char category[50][50] = {{"Alimentacion"},
                     {"Vivienda"},
                     {"Vestuario"},
                     {"Salud"},
                     {"Entretenimiento"}};
int main()
{
    
    int Num = 1;
    for (int i = 0; i < 5; i++)
    {
        
        cout << Num << " >> ";
        for (int j = 0; j < 50; j++)
        {
            cout << category[i][j];
        }
        Num++;
        cout << endl;
    }
    
    
    
    return 0;
}