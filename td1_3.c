//echange de 2 valeurs
/* ALGORITHME
FONCTION
  FONCTION_UTILISEE switchpf(a,b)
  VARIABLE_FONCTION
    tmp : reel
  DEBUT_FONCTION
    AFFICHER"Inserer le nombre a : "
    LIRE a
    AFFICHER"Inserer le nombre b : "
    LIRE b
    tmp PREND_LA_VALEUR_DE a
    a PREND_LA_VALEUR_DE b
    b PREND_LA_VALEUR_DE tmp
    AFFICHER"a devient : "
    AFFICHER a
    AFFICHER"b devient :"
    AFFICHER b
  RENVOYER a
  RENVOYER b
VARIABLE 
  nbr1 , nbr2 types reel
DEBUT
  APPEL_A_LA_FONCTION switchpf(nbr1,nbr2)
FIN
*/
#include <stdio.h>
float switchpf(float a , float b){ //creation d'une fonction
   float tmp;
   printf("Inserer le nombre a : ");
   scanf("%f" , &a);
   printf("Inserer le nombre b : ");
   scanf("%f" , &b);
   //usage de tmp pour stocker la valeur de  a
   tmp=a;
   a=b;
   b = tmp ;
   printf("a devient %f et b devient %f \n",a,b);
   return a;
   return b;
   }
int main (void){  
  int nbr1, nbr2 ;
  switchpf(nbr1 , nbr2);
  return 0;
  }
   
