#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

namespace categoriesFuntions
{
    char categories[5][20]={{"ALIMENTACION"},
                        {"VIVIENDA"},
                        {"VESTUARIO"},
                        {"SALUD"},
                        {"ENTRENAMIENTO"}};//This array defines the system default categories.
    
    char **ptrAddCategories; //This pointer points to the array of arrays of the added categories.
    int adRows = 0, 
    cols = 20;
        
    void showCategories(char categories[][20])//This function shows the default categories of the system.
    {
        int numCategories = 1;
        for (int i = 0; i < 5; i++)
        {
            cout << numCategories++ << ")\t";
            for (int j = 0; j < 20; j++)
            {
                cout << categories[i][j];
            }
            cout << endl;
        }
    }
    
    bool compareCat(char **ptrAddCategories, int adRows, int cols, char categories[][20])
    {
        bool result = false;
            for (int i = 0; i < adRows; i++)
            {
                int aux = adRows;
                for (int j = 0; j < 5; j++)
                {
                    if (strcmp(*(ptrAddCategories+i),*(categories+j))==0)
                    {
                    result = true;
                    }
                    else
                    {
                        ptrAddCategories[aux] = *(categories + j);
                        aux++;
                    }
                }
            }

            return result;
    }
    
    void addCategories()
    {
        cout << "\n>>Digite el numero de categorias que desea agregar: ";
        cin >> adRows;
        
        ptrAddCategories = new char*[adRows+5];
        for (int i = 0; i < adRows+5; i++)
        {
            ptrAddCategories[i] = new char[cols];
        }
        cout << "\nPor favor digite las categorias que quiere agregar a la lista de opciones\n\n";
        
        int catNum = 1;
        for (int i=0; i < adRows; i++)
        {
            cout << "Categoria " << catNum++ << ": ";
            cin >> ptrAddCategories[i];
            strupr(ptrAddCategories[i]);
        }
    }

    void showCategoriesAdd(char **ptrAddCategories, int adRows, int adCols)//This function shows the categories added to the system.
    {
        cout << "\nLas categorias para agregar a la lista son:\n\n";
        int catNum = 1;
        for (int i = 0; i < adRows; i++)
        {
            
            cout << catNum++ << ")\t" << *(ptrAddCategories + i) << endl;
        }
    }   
}