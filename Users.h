#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

namespace systemUsers
{
    char forms[][20] = {{"Nombre"},{"Documento"},{"Edad"},{"Profesion"},{"Nacionalidad"}};
    char **ptrNames, **ptrDocs, **ptrEdad, **ptrProfession, **ptrNationality;
    char **ptrDbDocs;
    int uCols = 30, uRows;

    bool compareUserData(char**, char**, int, int)
    {
        bool repeat = true;
        int counter = 0;
        for (int i = 0; i < uRows; i++)
        {
            for (int j = 0; j < uRows; j++)
            {
                if (ptrDocs[i] == ptrDbDocs[j])
                {
                    counter++;
                }
                
            }
        }
        
        if (counter == uRows)
        {
            repeat = false;
        }
        

        return repeat;
    }
    
    void getUserData()
    {
        do
        {
            cout << "\nDigite el numero de usuarios que desea registrar: ";
            cin >> uRows;
            
            ptrNames = new char*[uRows];
                
            ptrDocs = new char*[uRows];
            ptrDbDocs = new char*[uRows];
        
            ptrEdad = new char*[uRows];
            ptrProfession = new char*[uRows];
            ptrNationality = new char*[uRows];
                
            for (int i = 0; i < uRows; i++)
            {
                ptrNames[i] = new char[uCols];
                
                ptrDocs[i] = new char[uCols];
                ptrDbDocs[i] = new char[uCols];
        
                ptrEdad[i] = new char[uCols];
                ptrProfession[i] = new char[uCols];
                ptrNationality[i] = new char[uCols];    
            }
            
            cout << "\nDigite los datos del usuario o los usuarios que desea registrar.\n\n";
            for (int i = 0; i < uRows; i++)
            {
                cin.ignore(100000,'\n');
                cout << "Nombre: "; 
                cin.getline(ptrNames[i],uCols,'\n');
                cout << "Documento: "; 
                cin >> ptrDocs[i];
        
                ptrDbDocs[i] = ptrDocs[i]; 
        
                cout << "Edad: "; 
                cin >> ptrEdad[i];
                cin.ignore(100000,'\n');
                cout << "Profesion: "; 
                cin.getline(ptrProfession[i],uCols,'\n');
                //cin.ignore(100000,'\n');
                cout << "Nationalidad: "; 
                cin.getline(ptrNationality[i],uCols,'\n');
            } 
            //compareUserData(ptrNames, uRows, uCols);
            
        }
        while(compareUserData(ptrNames, ptrDbDocs, uRows, uCols) == true);
    }

    void showUserData(char**, int, int)
    {
        
        cout << endl << "\t\t\tUSUARIOS ACTUALMENTE REGISTRADOS\n\n";

        for (int i = 0; i < uRows; i++)
        {
            cout << "Nombre: " << *(ptrNames+i) << endl;
            cout << "Documento: " << *(ptrDocs+i) << endl;
            cout << "Edad: " << *(ptrEdad+i) << endl;
            cout << "Profesion: " << *(ptrProfession+i) << endl;
            cout << "Nacionalidad: " << *(ptrNationality+i) << endl;
            cout << endl;
        }
    }

    void freeMemUsers(char **ptrNames, char **ptrDocs, char **ptrEdad, char **ptrProfession, char **ptrNationality,
    char **ptrDbDocs, int uRows, int uCols)
    {
        for (int i = 0; i < uRows; i++)
        {
            delete[] ptrNames[i];
            delete[] ptrDocs[i];
            delete[] ptrEdad[i];
            delete[] ptrProfession[i];
            delete[] ptrNationality[i];
            delete[] ptrDbDocs[i];
        }
        delete[] ptrNames;
        delete[] ptrDocs;
        delete[] ptrEdad;
        delete[] ptrProfession;
        delete[] ptrNationality;
        delete[] ptrDbDocs;
    }
    
}