#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char categories[5][20]={{"ALIMENTACION"},
                        {"VIVIENDA"},
                        {"VESTUARIO"},
                        {"SALUD"},
                        {"ENTRENAMIENTO"}};
char **ptrAddCategories; int adRows = 0, Rows = 2 + adRows, cols = 20;

void addCategories();
void showCategoriesAdd(char **ptrAddCategories, int adRows, int cols);
void showCategories(char Categories[][20]);
bool compareCat(char **ptrAddCategories, int adRows, int cols, char categories[][20]);

int main()
{
    //bool compare = compareCat(ptrAddCategories, adRows, cols, categories);
    showCategories(categories);
    addCategories();
    //showCategoriesAdd(ptrAddCategories, adRows, cols);
    
    if (bool compare = compareCat(ptrAddCategories, adRows, cols, categories) == true)
    {
        showCategories(categories);
    }
    else
    {
        showCategoriesAdd(ptrAddCategories, (5+adRows), cols);
    }
    //compareCat(ptrAddCategories, adRows, cols, categories);
    
    
    return 0;
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
              //cout << "\nUna o mas categorias ya existen!!";
              //ptrAddCategories[aux] = *(categories + j);
              //aux++;
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

void showCategories(char categories[][20])
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

void showCategoriesAdd(char **ptrAddCategories, int adRows, int cols)
{
    cout << "\nLas categorias para agregar a la lista son:\n\n";
    int catNum = 1;
    for (int i = 0; i < adRows; i++)
    {
        
        cout << catNum++ << ")\t" << *(ptrAddCategories + i) << endl;
    }
}