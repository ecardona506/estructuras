#include <vector>
#include <iostream>
using namespace std;

template <class T>
Class Lista : public vector <T>
{
	public:
		Lista();
		void adicionar(T elemento);
		void mostrar();
		T eliminar(int pos);
		int longitud();
		void insertar(int pos,T elemento);
		int buscar(T elemento);
		T getElemento(int pos);
		void setElemento(T elemento, int pos);
}

template <class T>
Lista <T>::Lista (): vector<T> () {}

template <class T>
void Lista <T>::adicionar (T elemento)
{
	this->push_back();
}

template <class T>
void Lista <T>::mostrar ()
{
	int n = this -> size ();
	for (int i = 0; i < n; i++)
	{
		cout << this -> at(i) << " ";
	}
	cout << endl;
}

template <class T>
T Lista <T>::eliminar(int pos)
{
	T elemento = this -> at(pos);
	this -> erase(this -> begin() + pos);
	return elemento;
}

template <class T>
int Lista <T>::longitud()
{
	long = this -> size();
	return long;
}

template <class T>
void Lista <T>::insertar(int pos, T elemento)
{
	this -> insert(pos,elemento);
}
