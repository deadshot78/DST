#include <iostream>

using namespace std;
const int n=20;

int main(void)
{
int tb[n], nb=0, f, r, i;
bool reel = false;

while(reel==false)
  {
  cout << "(1) ajouter un reel" << endl;
  cout << "(2) afficher la liste des reels" << endl;
  cout << "(3) supprimer le premier reel ayant une valeur donnee" << endl;
  cout << "(4) supprimer tous les reels ayant une valeur donnee" << endl;
  cout << "(5) quitter" << endl;
  cout << "que voulez vous faire :" << endl;
  cin >> f;

  switch(f)
    {
/*!\ case 1
  *\ demande a l'utilisateur de donner un reel
  *\ puis affiche ce reel
  */
     case 1:
          cout << "donnez un reel =" << endl;
          cin >> r;
             if (nb<n)
             { tb[nb]=r; nb++;
             cout << "reel ajoute" << endl;
             }
             else
             cout << "impossoble il n'y a plus de place dans le tableau" << endl;
             break;
/*!\ case 2
  *\ si l'utlisateur n'a pas rentrer de valeur alors la liste est vide
  *\ sinon la liste avec un ou des reels va s'afficher
  */
     case 2:
          if (nb==0)
          cout << "la liste est vide " << endl;
          else {
          cout << "voici la liste des reels " << endl;
              for(i=0; i<nb; i++)
              cout << tb[i] << " ";
              }
          break;
/*!\ case 3
  *\ supprime le premier reel ayant une valeur donnee
  */
     case 3:
          {
          cout << "supprime le premier reel ayant une valeur donnee" << endl;
          }
          break;
/*!\ case 4
  *\ supprime tous les reels ayant une valeur donnee
  */
     case 4:
          {
          cout << "supprime tous les reels ayant une valeur donnee" << endl;
          }
          break;
/*!\ case 5
  *\ si toutes les conditions sont remplies cela quitte
  */
     case 5:
          reel=true;
          break;
    }
  }
  return 0;
}



