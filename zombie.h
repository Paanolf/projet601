#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

/*Représente un zombie*/
typedef struct {
  int hp;
  int x;
  int y;
}zombie_t;

zombie_t * createZombie(int, int, int);
void moveZombie(int, int);
void moveZombieAlea(); /*Pour le mouvement aléatoire*/
#endif
