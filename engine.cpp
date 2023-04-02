#include <ctime>
#include <fstream>
#include <iostream>
#include <std>
#include <string>
#include <thread>
#include <windows.h>

#include "2d/2d.cpp"
#include "3d/3d.cpp"
#include "audio/audio.cpp"
#include "camera/camera.cpp"
#include "decryption/decryption.cpp"
#include "derivation/derivation.cpp"
#include "encryption/encryption.cpp"
#include "graphics/graphics.cpp"
#include "hashing/hashing.cpp"
#include "inputs/inputs.cpp"
#include "internet/internet.cpp"
#include "physics/physics.cpp"
#include "player/player.cpp"
#include "project/project.cpp"
#include "user-interface/user-interface.cpp"

namespace engine {
    
    uint1_t stopEngine = 0,
            playingGameInGameUI = 0;
    
    unsigned int start(uint9_t fps) {
        
        while(stopEngine == 0) {
            
            if (playerGameInGameUI == 0) {
                
                sleep(1000 / fps);
                
            } else {
                
                
                
            };
            
        };
        
    };
    
}
