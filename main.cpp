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
    int a, b;//vars
    do
    {
        cout << "\n1) Usuarios \n";
        cout << "2) Categorias \n";
        cout << "3) Transacciones \n";
        cout << "4) Busqueda \n";
        cout << "5) Salir \n";
        cout << "\nPor favor seleccione una opcion: ";
        cin >> a;
        
        switch (a)
        {
            case 1:
                int b;
                cout << "\n1) Registrar 1 o mas usuarios. \n";
                cout << "2) Consultar los usuarios del sistema. \n";
                cout << "\nIndique su opcion: ";
                cin >> b;
                
                switch (b)
                {
                    case 1:
                    getUserData();
                    break;

                    case 2:
                    showUserData(ptrNames, uRows, uCols);
                    break;
                }
                
                break;

            case 2:
                int c;
                cout << "\n1)Registrar categorias. \n";
                cout << "2)Listar las categorias por defecto. \n";
                cout << "3)Listar categorías completas \n";
                cout << "\nIndique su opcion: ";
                cin >> c;

                switch (c)
                {
                    case 1:
                        addCategories();
                        break;
                    
                    case 2:
                        showCategories(categories);
                        break;
                    case 3:
                        if (bool compare = compareCat(ptrAddCategories, adRows, cols, categories) == true)
                        {
                            showCategories(categories);
                        }
                        else
                        {
                            showCategoriesAdd(ptrAddCategories, (5+adRows), cols);
                        }
                        break;
                }
                break;
            
            case 3:
            int t;
            cout << "\n1)Generar transaccion. \n";
            cout << "2)Ver historial de transacciones. \n";
            cout << "\nIndique su opcion: ";
            cin >> t;
            switch(t)
            {
                case 1:
                    getTimeNow ();
                    break;
                case 2:
                    showTransactions();
                    break;
            }
        }
        
    }
    while(a != 5);
    
    freeMem(ptrAddCategories, adRows, cols);//Free categorie's mem
    
    freeMemUsers(ptrNames, ptrDocs, ptrEdad, ptrProfession, ptrNationality,
    ptrDbDocs, uRows, uCols); //Free user's mem

    freeMemTr(ptrTransactions, ptrTimeDate, nRows, nCols);//Free transaction's mem.
       

    return 0;
}