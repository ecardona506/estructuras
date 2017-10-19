#include "cola.cpp"
#include <stdexcept>
int main () 
{
	try 
	{
		Cola <int> c1;
		
		c1.adicionar (2);
		c1.adicionar (5);
		c1.adicionar (7);
		
		c1.mostrar ();
		
		c1.eliminar ();
		c1.mostrar ();
		c1.eliminar ();
		c1.mostrar ();
		
		c1.eliminar ();
		c1.mostrar ();
		
		c1.eliminar ();
	}
	catch (const std::out_of_range &oor) 
	{
  		cout << "No hay mas elementos en la cola" << endl;
 	}
}