#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> enteros;

    string op;

    while (true)
    {
        system("cls");
        cout << "1) Agrega al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar ultimo" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1"){
            int entero;

            cout << "Entero: ";
            cin >> entero; cin.ignore();

            enteros.push_back(entero);
        }
        else if (op == "2"){
            for (size_t i = 0; i < enteros.size(); i++){
                cout << enteros[i] << " , ";
            }
            cout << endl;
            system("pause");

        }
        else if (op == "3"){
            size_t n;
            int entero;

            cout << "Tam: ";
            cin >> n;
            cout << "Enetero: ";
            cin >> entero; cin.ignore();

            enteros = vector<int>(n,entero);
        }
        else if (op == "4"){
            if (enteros.empty())
            {
                cout << "Vector esta vacio" << endl;
            }
            else {
                cout << enteros.front() << endl;
            }
            
        }
        else if (op == "5"){
            if (enteros.empty())
            {
                cout << "Vector esta vacio" << endl;
            }
            else {
                cout << enteros.back() << endl;
            }
        }
        else if (op == "6"){
            // esta opcion ↓ ordena de menor a mayor
            // sort(enteros.begin(), enteros.end());

            // De esta forma definimos como ordenar el arreglo ↓
            // Ordena de mayor a menor
            sort(enteros.begin(), enteros.end(), greater<int>());
        }
        else if (op == "7"){
            size_t p;
            int entero;

            cout << "Posicion: ";
            cin >> p;
            cout << "Entero: ";
            cin >> entero; cin.ignore();

            if (p >= enteros.size()){
                cout << "Posicion no valida" << endl;
            }
            else {
                enteros.insert(enteros.begin()+p, entero);
            }
        }
        else if (op == "8"){
            size_t p;

            cout << "Poscion: ";
            cin >> p; cin.ignore();

            if (p >= enteros.size()){
                cout << "Posicion no valida" << endl;
            }
            else {
                enteros.erase(enteros.begin()+p);
            }
        }
        else if (op == "9"){
            if (enteros.empty()){
                cout << "Vector esta vacio" << endl;
            }
            else {
                enteros.pop_back();
            }
            
        }
        else if (op == "0"){
            break;
        }
    }
    





    getch();
    return 0;
}