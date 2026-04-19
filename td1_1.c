/*ALGORITHME
FONCTIONS_UTILISEES
  FONCTION signe(a)
    VARIABLES_FONCTION
      a EST_DU_TYPE NOMBRE
    DEBUT_FONCTION
    AFFICHER "entrer un nombre"
    LIRE a
    SI (a<0) ALORS
      DEBUT_SI
      AFFICHER* "Votre Nombre est negatif"
      FIN_SI
    SI (a==0) ALORS
      DEBUT_SI
      AFFICHER* "votre nombre est positif"
      FIN_SI
    SI (a>0) ALORS
      DEBUT_SI
      AFFICHER* "Votre nombre est positif"
      FIN_SI
    FIN_FONCTION
VARIABLES
  b EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  APPELER_FONCTION signe(b)
FIN_ALGORITHME*/
#include <stdio.h>
void sg(float a);
void sg(float a){
  printf("Entrer votre nombre : ");
  scanf("%f",&a);
  if(a>0)
  {  
   printf("Votre nombre est positif\n");
  }
  if(a==0)
  {   
   printf("votre nombre est nul\n");
  }
  if(a<0)
 {    
   printf("Votre nombre est negatif\n");
   }
}
int main (void){
 float b;
 sg(b);
 return 0;
 }
