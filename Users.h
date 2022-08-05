#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

namespace systemUsers
{
    char forms[][20] = {{"Nombre"},{"Documento"},{"Edad"},{"Profesion"},{"Nacionalidad"}};
    char **ptrNames, **ptrDocs, **ptrEdad, **ptrProfession, **ptrNationality;
    int uCols = 30, uRows;

    void getUserData()
    {
        cout << "Digite el numero de usuarios que desea registrar: ";
        cin >> uRows;
        
        ptrNames = new char*[uRows];
        ptrDocs = new char*[uRows];
        ptrEdad = new char*[uRows];
        ptrProfession = new char*[uRows];
        ptrNationality = new char*[uRows];
        
        for (int i = 0; i < uRows; i++)
        {
            ptrNames[i] = new char[uCols];
            ptrDocs[i] = new char[uCols];
            ptrEdad[i] = new char[uCols];
            ptrProfession[i] = new char[uCols];
            ptrNationality[i] = new char[uCols];    
        }
        
        cout << "\nDigite los datos del usuario o los usuarios que desea registrar.\n";
        for (int i = 0; i < uRows; i++)
        {
            cin.ignore(100000,'\n');
            cout << "Nombre: "; 
            cin.getline(ptrNames[i],uCols,'\n');
            cout << "Documento: "; 
            cin >> ptrDocs[i];
            cout << "Edad: "; 
            cin >> ptrEdad[i];
            cin.ignore(100000,'\n');
            cout << "Profesion: "; 
            cin.getline(ptrProfession[i],uCols,'\n');
            //cin.ignore(100000,'\n');
            cout << "Nationalidad: "; 
            cin.getline(ptrNationality[i],uCols,'\n');
        }
        
    }

    void showUserData(char**, int, int)
    {
        
        for (int i = 0; i < uRows; i++)
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
        for (int i = 0; i < uRows; i++)
        {
            for (int j = 1; j < uRows; i++)
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