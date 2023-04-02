#include <ctime>
#include <fstream>
#include <iostream>
#include <std>
#include <string>
#include <thread>

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
    
    unsigned int start(string args[]) {
        
        inputs.start();
        internet.start();
        twod.start();
        threed.start();
        player.start();
        physics.start();
        camera.start();
        raytracing.start();
        decryption.start();
        derivation.start();
        encryption.start();
        hashing.start();
        internet.start();
        userinterface.start();
        audio.start();
        
    };
    unsigned int pause(string args[]) {
        
        
        
    };
    unsigned int unpause(string args[]) {
        
        
        
    };
    unsigned int stop(string args[]) {
        
        
        
    };
    
}
