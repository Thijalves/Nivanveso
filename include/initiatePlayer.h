#ifndef INITIATEPLAYER_H
#define INITIATEPLAYER_H

#include "raylib.h"
#include "structPlayer.h"

void initiatePlayer(Player *player){
    player->hSpeed = 125;
    player->vSpeed = 0;
    player->jumpS = 250;
    player->idle.texture = LoadTexture("../resources/idle.png");
    player->idle.maxFrames = 12;
    player->position.x = 10;
    player->position.y = 256;
    player->frame.x = 0.0f;
    player->frame.y = 0.0f;
    player->facingDirection = 1;
    player->frame.width = (float)player->idle.texture.width/player->idle.maxFrames;
    player->frame.height = (float)player->idle.texture.height;
    
    //carrega a anumacao run
    player->run.texture = LoadTexture("../resources/run.png");
    player->run.maxFrames = 8;

    //animacao de correr para a esquerda
    player->runLeft.texture = LoadTexture("../resources/runLeft.png");
    player->runLeft.maxFrames = 8;

    //sprite pulando
    player->jumping.texture = LoadTexture("../resources/jumping.png");
    player->jumping.maxFrames = 1;

    //sprite caindo
    player->falling.texture = LoadTexture("../resources/falling.png");
    player->falling.maxFrames = 1;
}

#endif