#include "Users.h"
#include "Categories.h"
#include "Transactions.h"
#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctime>

using namespace std;
using namespace systemUsers;
using namespace categoriesFuntions;
using namespace TrFuntions;

int main()
{
    int a, b;
    do
    {
        cout << "\n1) Usuarios \n";
        cout << "2) Categorias \n";
        cout << "3) Transacciones \n";
        cout << "4) Busqueda \n";
        cout << "5) Salir \n";
        cout << "Por favor seleccione una opcion: ";
        cin >> a;
        
        switch (a)
        {
            case 1:
                getUserData();
                break;
                    
        }
        
    }
    while(a != 5);
    return 0;
}