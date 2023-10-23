#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int tableau[5][4];

    int const tailleX(5);
    int const tailleY(4);
    int tableau[tailleX][tailleY];


    /*Notez qu'il est aussi possible de créer des tableaux multidimensionnels
     de taille variable, en utilisant des  vector  . Pour une grille 2D d'entiers,
      on devra écrire :*/
    vector<vector<int> > grille;

    grille.push_back(vector<int>(5));   //On ajoute une ligne de 5 cases à notre grille
    grille.push_back(vector<int>(3,4)); //On ajoute une ligne de 3 cases contenant chacune le nombre 4 à notre grille

    grille[0].push_back(8);     //Ajoute une case contenant 8 à la première ligne du tableau
    grille[2][3] = 9;     //Change la valeur de la cellule (2,3) de la grille
}

/*
    Les tableaux multidimensionnels utilisant des  vector  
    ne sont pas la meilleure manière d'accéder efficacement à
     la mémoire, et ne sont pas très optimisés. On préférera 
     donc utiliser des tableaux multidimensionnels statiques, 
     à moins que le fait de pouvoir changer la taille de la grille
      en cours de route soit un élément essentiel. 
*/