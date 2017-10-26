#include "Lista.cpp"
#include <stdexcept>
int main () 
{
	try 
	{
		Lista <int> l1;
		
		l1.adicionar (2);
		l1.adicionar (5);
		l1.adicionar (7);
		
		l1.mostrar ();
		
		l1.eliminar (1);
		l1.mostrar ();
		l1.eliminar (0);
		l1.mostrar ();
		
		l1.eliminar (0);
		l1.mostrar ();
		
		l1.eliminar (0);
	}
	catch (const std::out_of_range &oor) 
	{
  		cout << "No hay mas elementos en la lista" << endl;
 	}
}