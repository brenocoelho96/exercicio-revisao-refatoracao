#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1("Joao Snow",35, 9.5,3);
  eng1.GetEngenheiro();
  Engenheiro eng2("Daniela Targaryen", 30, 8, 1);
  eng2.getEngenheiro();
  Engenheiro eng2;
  Engenheiro eng3("Bruno Stark", 30, 8, 2);
  eng3.getEngenheiro();
  Vendedor ven1("Tonho Lannister", 20, 6, 5000);
  ven1.GetVendedor();
  Vendedor ven2("Jose Mormont", 25, 8, 3000); 
  ven2.GetVendedor();
  Vendedor ven3("Sonia Stark", 30, 8, 4000);
  ven3.GetVendedor();
  
  return 0;	
}
