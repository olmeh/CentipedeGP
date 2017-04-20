/*
* Group Members:
*   Olmeh Salinas
*   Christian Hansen
*   Emmanuel Ngong
*   Billy Roberson
*   Josh -something-
* Assignment Name: Centipede Game
* Assignment Description: Create the game Centipede.
*/

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player{
private:
    int lives;
public:
    Player();
    Player(int,SDL_Plotter&);

    void ShootBullet();


};

#endif // PLAYER_H_INCLUDED
