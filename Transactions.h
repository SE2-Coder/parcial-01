#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;

namespace TrFuntions
{
    char** ptrTransactions; char**ptrTimeDate; int nRows, nCols = 50;

    void getTimeNow ()
    {
        time_t timeNow = time(0);
        char* dt = ctime(&timeNow);
                
        cout << "Numero de transacciones que quiere realizar: ";
        cin >> nRows;
        
        ptrTransactions = new char*[nRows];
        ptrTimeDate = new char*[nRows];
        for (int i = 0; i < nRows; i++)
        {
            ptrTransactions[i] = new char[nCols];
            ptrTimeDate[i] = new char[nCols];
            
        }   
        
        
        for (int i = 0; i < nRows; i++)
        {
            cout << "\nIngrese el monto: $";
            cin >> ptrTransactions[i];
            ptrTimeDate[i] = dt;
        }
        cout << endl;
    }

    void showTransactions()
    {
        for (int i = 0; i < nRows; i++)
        {
            cout << "$" << ptrTransactions[i] << endl;
            cout << ptrTimeDate[i] << endl;
        }
        
    }

    void freeMemTr(char** ptrTransactions, char**ptrTimeDate, int nRows, int nCols)
    {
        for (int i = 0; i < nRows; i++)
        {
            delete[] ptrTransactions[i];
            delete[] ptrTimeDate[i];
        } 

        delete[] ptrTransactions;
        delete[] ptrTimeDate;
    }

}