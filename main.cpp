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

        cout << "1) Agrega al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
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
        
        
        
        else if (op == "0"){
            break;
        }
        
        
    }
    





    getch();
    return 0;
}