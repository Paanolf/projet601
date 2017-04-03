#ifndef _MAP_H_
#define _MAP_H_

/*Représente la carte.*/
typedef struct {
  unsigned short hauteur;
  unsigned short largeur;
  case_t cases[largeur][hauteur];
  unsigned char nbMaxPlayer; /*max 20; >=2 min*/
  unsigned short genMeal; /*periode de generation de nourriture*/
}map_t;
#endif
