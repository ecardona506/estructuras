#include "pila.cpp"
#include <stdexcept>
#include <vector>
int main () {
  try {
	Pila <int> p;
	
	p.adicionar (2);
	p.adicionar (5);
	p.adicionar (7);
	
	p.mostrar ();
	
	p.eliminar ();
	p.mostrar ();
	p.eliminar ();
	p.mostrar ();
	
	p.eliminar ();
	p.mostrar ();
	
	p.eliminar ();
  }catch (const std::out_of_range &oor) {
  	cout << "No hay mas elementos en la pila" << endl;
  }
}