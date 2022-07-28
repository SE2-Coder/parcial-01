#include <iostream>
#include <conio.h>
using namespace std;

struct Person{
        char name[50];
        char document[15];
        char nationality[15];
        char birthDay[9];
        int age = 0;
        char profession[30];
        char address[50];
        char city[30];
        
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
        cout << ">> Por favor digite su nombre: ";
        cin.getline((ptrPerson+i) -> name,30,'\n');
        cout << ">> Documento: ";
        cin.getline((ptrPerson+i) -> document,15,'\n');
        cout << ">> Nacionalidad: ";
        cin.getline((ptrPerson+i) -> nationality,15,'\n');
        cout << ">> Fecha de nacimiento \nformato dd/mm/aa/: ";
        cin.getline((ptrPerson+i) -> birthDay,15,'\n');
        cout << ">> Edad: ";
        cin >> (ptrPerson+i) -> age;
        cout << "\n>> Profesion: ";
        cin.getline((ptrPerson+i) -> profession,30,'\n');
        cout << ">> Direccion: ";
        cin.getline((ptrPerson+i) -> address,50,'\n');
        cout << ">> Ciudad: ";
        cin.getline((ptrPerson+i) -> city,30,'\n');
    }
}