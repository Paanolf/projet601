#ifndef _CASE_H_
#define _CASE_H_

/*Représente le contenu d'une case;
Valeur 0 = vide ;
Valeur 1 à 20 : les repères du joueur 1 au joueur 20 (plusieurs cases du même repère possible);
Valeur 21 à 50 : les cachettes (21 => toutes les cachettes du réseau 1, 22 => toutes les cachettes du réseau 2, etc.);
Valeur 51 : obstacle ;
Valeur 52 : cimetière.*/
typedef struct {
  int type;
}case_t;

#endif
