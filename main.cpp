// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Contacto.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto contacto (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varios contactos en un solo archivo
void escribir(string nombre_archivo, Contacto*contacto, int posicion)
{
//    ofstream out(nombre_archivo.c_str(),ios::in);
//    out.seekp(28*posicion);
//    out.write(contacto->nombre.c_str(),10);
//    out.write(contacto->correo.c_str(),10);
//    out.write((char*)&contacto->numero,8);
//    out.close();
}

//Devuelve un contacto previamente escrito (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varios contactos de un solo archivo
Contacto* leer(string nombre_archivo, int posicion)
{
//    ifstream in(nombre_archivo.c_str());
//    string nombre;
//    string correo;
//    int numero;
//    in.seekg(28*posicion);
//    in.read((char*)&nombre,10);
//    in.read((char*)&correo,10);
//    in.read((char*)&numero,8);
//    in.close();
//    Contacto *c = new Contacto(nombre, correo, numero);
//    return c;


}

//Devuelve un vector que contenga todos los nombres de los contactos previamente ingresados en el archivo con nombre dado
vector<string> getNombres(string nombre_archivo)
{
    vector<string>nombres;
    return nombres;
}

//Devuelve true si valor_buscado (dado) se encuentra dentro de mi_cola (dada), de lo contrario devuelve false
bool existe(queue<char> mi_cola, char valor_buscado)
{
    return false;
}

//Devuelve true si valor (dado) existe dentro de mi_set (dado)
bool existe(set<int> mi_set,int valor)
{
    return false;
}

//Devuelve una lista inversa de mi_lista (dada)
list<double> invertir(list<double>mi_lista)
{
    list<double> invertida;
    return invertida;
}

//Devuelve la cantidad de nodos que contiene un arbol con raiz dada
int contar(NodoBinario* raiz)
{
    return -1;
}

//Cambia todos los valores de un arbol con raiz dada
void cambiarValores(NodoBinario* raiz,int nuevo_valor)
{
    if(raiz==NULL)
    return;
    if(raiz->valor!=nuevo_valor)
    raiz->valor=nuevo_valor;
    cambiarValores(raiz->hijo_der,nuevo_valor);
    cambiarValores(raiz->hijo_izq,nuevo_valor);
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

