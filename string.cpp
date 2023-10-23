#include <iostream>
#include <string>
using namespace std;

int main()
{
   string nomUtilisateur("Julien");
   cout << "Vous etes " << nomUtilisateur << "." <<endl;

   nomUtilisateur[0] = 'L';  //On modifie la première lettre
   nomUtilisateur[2] = 'c';  //On modifie la troisième lettre

   cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;

   return 0;
}