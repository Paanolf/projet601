#ifndef _HUMAN_H_
#define _HUMAN_H_

/*Représente un humain*/
typedef struct {
  int hp;
  int ammo;
  int stock;
  int x;
  int y;
}human_t;


human_t * createHuman(int, int, int, int, int);
void moveHuman(int, int);

#endif
