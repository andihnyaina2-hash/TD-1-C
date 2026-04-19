/*Algorithme
   FONCTIONS_UTILISEES
   FONCTION signe(a,b)
    VARIABLES_FONCTION
      a EST_DU_TYPE NOMBRE
      b EST_DU_TYPE NOMBRE
    DEBUT_FONCTION
    AFFICHER* "entrer un nombre :"
    LIRE a
    AFFICHER* "entrer un autre nombre:"
    LIRE b
    SI ((a<0 ET b<0)OU(a>0 ET b>0)) ALORS
      DEBUT_SI
      AFFICHER* "Leur produit est positif "
      FIN_SI
    SI ((a<0 ET b>0)OU(a>0 ET b<0)) ALORS
      DEBUT_SI
      AFFICHER* "Leur produit est negatif"
      FIN_SI
    SI ((a==0 ET b==0)OU(a==0 OU b==0)) ALORS
      DEBUT_SI
      AFFICHER* "Leur produit est nul "
      FIN_SI
    FIN_FONCTION
VARIABLES
  nbr1 EST_DU_TYPE NOMBRE
  nbr2 EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  APPELER_FONCTION signe(nbr1,nbr2)
FIN_ALGORITHME
*/
#include <stdio.h>
void signe(float a , float b){
   printf("entrer un nombre :  ");
   scanf("%f" , &a);
   printf("entrer un autre nombre :  ");
   scanf("%f" , &b);
   if((a < 0 && b < 0) || (a > 0 && b > 0)){  
    printf("Leur produit est positif\n");
   }
   if((a < 0 && b > 0) || (a > 0 && b < 0)){ 
    printf ("Leur produit est negatif\n");
    }
   if((a == 0 && b == 0) || (a == 0 || b == 0)){  
    printf ("Leur produit est nul\n");
    }
  }
int main (void){
  float a,b;
  signe(a , b);
  return 0;
  }
