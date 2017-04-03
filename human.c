#include "human.h"

human_t * createHuman(int hp, int ammo, int stock, int x, int y) {
  human_t * h;
  h = (human_t*)malloc(sizeof(human_t));
  if(h == NULL){
    printf("Erreur lors de la création d'un Humain\n");
    exit(-1);
  }
  h->hp = hp;
  h->ammo = ammo;
  h->stock = stock;
  h->x = x;
  h->y = y;

  return h;
}

void moveHuman(human_t *h, int newX, int newY) {
  h->x = newX;
  h->y = newY;
}
