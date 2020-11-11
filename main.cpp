#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> cadenas;
    string op;
    while(true)
    {
        cout << "1) Agregar al final" << endl;
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
        
        if(op == "1")
        {
            string cadena;

            cout << "Cadena: ";
            cin >> cadena; cin.ignore();

            cadenas.push_back(cadena);
        }
        else if (op == "2")
        {
            for (size_t i = 0; i < cadenas.size(); i++)
            {
                cout << cadenas[i] << ",";
            }
            cout << endl;
        }
        else if (op == "3")
        {
            size_t n;
            string cadena;

            cout << "tam: ";
            cin >> n;
            cout << "Cadena: ";
            cin >> cadena; cin.ignore();

            cadenas = vector<string>(n, cadena);
        }
        else if (op == "4") 
        {
            if (cadenas.empty())
            {
                cout << "Vector esta vacio" << endl;
            }
            else
            {
                cout << cadenas.front() << endl;
            }
            
        }
        else if (op == "5")
        {
            if (cadenas.empty())
            {
                cout << "Vector esta vacio" << endl;
            }
            else
            {
                cout << cadenas.back() << endl;
            }
        }
        else if (op == "6")
        {
            sort(cadenas.begin(), cadenas.end(), greater<string>());
        }
        else if (op == "7")
        {
            size_t p;
            string cadena;

            cout << "posicion: ";
            cin >> p;
            cout << "Cadena: ";
            cin >> cadena; cin.ignore();

            if(p >= cadenas.size())
            {
                cout << "posicion ";
            }
            else
            {
                cadenas.insert(cadenas.begin()+p, cadena);
            }
            
        }
        else if (op == "8")
        {
            size_t p;

            cout << "posicion: ";
            cin >> p; cin.ignore();

            if (p >= cadenas.size())
            {
                cout << "posicion no valida" << endl;
            }
            else
            {
                cadenas.erase(cadenas.begin()+p);
            }
            
        }
        else if (op == "9")
        {
            if(cadenas.empty())
            {
                cout << "Vector esta vacio" << endl;
            }
            else
            {
                cadenas.pop_back();
            }
            
        }
        else if (op == "0")
        {
            break;
        }    
    }
}