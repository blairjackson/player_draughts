/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: blairjackson
 *
 * Created on 9 May 2018, 9:15 AM
 */

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    void set_name(player player, string name){
        player.name = name;
    }
    string get_name(player player){
        return player.name;
    }
    
private:
    struct player{
        string name;
        int age, player_num;
        
    };

};

#endif /* PLAYER_H */

