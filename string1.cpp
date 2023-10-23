#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texte("Portez ce whisky au vieux juge blond qui fume.");  //46 caractères
    cout << "Cette phrase contient " << texte.size() << " lettres." << endl;// la taille de la phrase


   string prenom("Albert"); 
   string nom("Einstein");
   
   string total;    //Une chaîne vide
   total += prenom; //On ajoute le prénom à la chaîne vide
   total += " ";    //Puis un espace
   total += nom;    //Et finalement le nom de famille

   cout << "Vous vous appelez " << total << "." << endl; 

   return 0;
}