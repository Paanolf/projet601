#ifndef _MAP_H_
#define _MAP_H_

/*Représente la carte.*/
typedef struct {
  unsigned short hauteur;
  unsigned short largeur;
  case_t cases[largeur][hauteur];
  unsigned char nbMaxPlayer; /*max 20; >=2 min*/
  unsigned short genMeal; /*periode de generation de nourriture*/
  unsigned char nbMealSource; /*nombre de sources de nourriture créées ou modifiées*/
  unsigned short nbMealAdded; /*Quantité de nourriture ajoutée*/
  unsigned short genAmmo; /*periode de generation des munitions*/
  unsigned char nbAmmoSource; /*nombre de sources de munitions créées ou modifiées*/
  unsigned short nbAmmoAdded; /*quantité de munitions ajoutée*/
  unsigned short genZombie; /*periode de génération de zombie*/
  unsigned char nbMaxZombies; /*nombre maximum de zombies, ne peut pas dépasser 20*/
}map_t;
#endif
