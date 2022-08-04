#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

namespace systemUsers
{
    char forms[][20] = {{"Nombre"},{"Documento"},{"Edad"},{"Profesion"},{"Nacionalidad"}};
    char **ptrNames, **ptrDocs, **ptrEdad, **ptrProfession, **ptrNationality;
    int nCols = 30, nRows;

    void getUserData()
    {
        cout << "Digite el numero de usuarios que desea registrar: ";
        cin >> nRows;
        
        ptrNames = new char*[nRows];
        ptrDocs = new char*[nRows];
        ptrEdad = new char*[nRows];
        ptrProfession = new char*[nRows];
        ptrNationality = new char*[nRows];
        
        for (int i = 0; i < nRows; i++)
        {
            ptrNames[i] = new char[nCols];
            ptrDocs[i] = new char[nCols];
            ptrEdad[i] = new char[nCols];
            ptrProfession[i] = new char[nCols];
            ptrNationality[i] = new char[nCols];    
        }
        
        cout << "\nDigite los datos del usuario o los usuarios que desea registrar.\n";
        for (int i = 0; i < nRows; i++)
        {
            cin.ignore(100000,'\n');
            cout << "Nombre: "; 
            cin.getline(ptrNames[i],nCols,'\n');
            cout << "Documento: "; 
            cin >> ptrDocs[i];
            cout << "Edad: "; 
            cin >> ptrEdad[i];
            cin.ignore(100000,'\n');
            cout << "Profesion: "; 
            cin.getline(ptrProfession[i],nCols,'\n');
            //cin.ignore(100000,'\n');
            cout << "Nationalidad: "; 
            cin.getline(ptrNationality[i],nCols,'\n');
        }
        
    }

    void showUserData(char**, int, int)
    {
        
        for (int i = 0; i < nRows; i++)
        {
            cout << "Nombre: " << *(ptrNames+i) << endl;
            cout << "Documento: " << *(ptrDocs+i) << endl;
            cout << "Edad: " << *(ptrEdad+i) << endl;
            cout << "Profesion: " << *(ptrProfession+i) << endl;
            cout << "Nacionalidad: " << *(ptrNationality+i) << endl;
        }
    }

    bool compareUserData(char**, int, int)
    {
        bool repeat = false;
        for (int i = 0; i < nRows; i++)
        {
            for (int j = 1; j < nRows; i++)
            {
                if (*(ptrNames+i)==*(ptrNames+j) || *(ptrDocs+i)==*(ptrDocs+j))
                {
                    repeat = true;
                    break;
                }
                
            }
        }

        return repeat;
    }
}