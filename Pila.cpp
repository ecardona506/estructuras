#include <vector>
#include <iostream>
using namespace std;

template <class T> 
class Pila : public vector <T>
{
	public:
		Pila ();
		void adicionar (T elem);
		void mostrar ();
		T eliminar();
};
template <class T>
Pila <T>::Pila (): vector<T> () {}

template <class T>
void Pila <T>::adicionar (T elemento) {
	this -> push_back (elemento);
}

template <class T>
void Pila <T>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++)
	{
		cout << this->at (i) << " ";
	}
	cout << endl;
}

template <class T>
T Pila <T>::eliminar()
{
	int posUltimo = this->size () - 1;
	T elemento = this-> at(posUltimo);
	this ->pop_back();
	return elemento;
}