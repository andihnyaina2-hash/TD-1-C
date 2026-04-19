//somme et moyenne de 2 nombres
/*ALGORITHME
FONCTION
  FONCTION_UTILISEE scan(a,b)
    VARIABLE
      a,b :reel
    DEBUT_FONCTION
     AFFICHER"inserer un note : "
      LIRE a
      AFFICHER"inserer votre deuxieme nombre : "
      LIRE b
    FIN_FONCTION
  FONCTION_UTILISEE somme(a,b)
    VARIABLE
      a,b :reel
      s :reel
    DEBUT_FONCTION
      s PREND_LA_VALEUR_DE a + b
      AFFICHER"la somme s "
      AFFICHER  s
      RENVOYER s
    FIN_FONCTION
  FONCTION_UTILISEE moyenne(a,b)
    VARIABLE
      a,b,m :reel
    DEBUT_FONCTION
      m PREND_LA_VALEUR_DE (a+b)/2
      AFFICHER "et votre moyenne est de"
      AFFICHER m
      RENVOYER m
    FIN_FONCTION
VARIABLE
  note1,note2 :reel 
DEBUT
  APPEL_A_LA_FONCTION scan(note1,note2)
  APPEL_A_LA_FONCTION somme(note1,note2)
  APPEL_A_LA_FONCTION moyenne(note1,note2)
FIN
*/

#include <stdio.h>
void scan(float *a , float *b ){  //une fonction qui permet au utlisateur d'entrer un nombre
   printf("inserer votre premier note : ");
   scanf("%f",a);
   printf("inserer votre deuxieme note : ");
   scanf("%f",b);
   }
float somme(float a ,float b ){// fonction qui calcule la somme
   float s;
   s = a + b;
   return s;
   }
float moyenne(float a ,float b ){ // fonction qui calcule la moyenne 
   float m;
   m = (a+b)/2 ;
   return m;
   }
void print(float c , float d){ // une autre fonction qui affiche 
    printf("la valeur de la cette somme est %f , leur moyenne est %f \n" , c , d);
   }
int main (void){ // fonction main
  float note1, note2 , stockageS , stockageM ;
  scan(&note1 , &note2);
  stockageS = somme(note1 , note2);
  stockageM = moyenne(note1 , note2);
  print(stockageS , stockageM );
  return 0;
  }
      
