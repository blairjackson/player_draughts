/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blairjackson
 *
 * Created on 9 May 2018, 9:13 AM
 */

#include <cstdlib>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>

#include "Player.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Player player1;
    player1.set_name("bob");
    cout << player1.get_name();
    return 0;
}

