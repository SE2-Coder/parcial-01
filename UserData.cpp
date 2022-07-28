#include <iostream>
#include <conio.h>
using namespace std;

struct Person{
        char name[50];
        char document[15];
        char nationality[15];
        char birthDay[9];
        int age = 0;
                
}person[5], *ptrPerson = person;
    
void getData();

int main()
{
    getData();

    return 0;
}

void getData()
{
    for (int i = 0; i < 5; i++)
    {
        //fflush:(stdin);
        cout << ">> Por favor digite su nombre: ";
        cin.getline((ptrPerson+i) -> name,30,'\n');
        cout << ">> Documento: ";
        cin.getline((ptrPerson+i) -> document,15,'\n');
        cout << ">> Nacionalidad: ";
        cin.getline((ptrPerson+i) -> nationality,15,'\n');
        cout << ">> Fecha de nacimiento formato dd/mm/aa/: ";
        cin.getline((ptrPerson+i) -> birthDay,15,'\n');
        cout << ">> Edad: ";
        cin >> (ptrPerson+i) -> age;
        
    }
}