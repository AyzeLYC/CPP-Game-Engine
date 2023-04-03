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
            playingGame = 0,
            inputsTestResult = 0,
            internetTestResult = 0,
            twoDTestResult = 0,
            threeDTestResult = 0,
            playerTestResult = 0,
            physicsTestResult = 0,
            graphicsTestResult = 0,
            cameraTestResult = 0,
            encryptionTestResult = 0,
            decryptionTestResult = 0,
            derivationTestResult = 0,
            hashingTestResult = 0,
            userinterfaceTestResult = 0,
            audioTestResult = 0; // different tests results 1 bit variables that will be updated only at the start of the engine, the app will keep trying to do the tests until all the variables are equal to 1
    
    thread inputsThread(userinterface.start),
           internetThread(internet.start),
           twodThread(twod.start),
           threedThread(threed.start),
           playerThread(player.start),
           physicsThread(physics.start),
           graphicsThread(raytracing.start),
           cameraThread(camera.start),
           encryptionThread(encryption.start),
           decryptionThread(decryption.start),
           decryptionThread(decryption.start),
           derivationThread(derivation.start),
           hashingThread(hashing.start),
           userinterfaceThread(userinterface.start),
           audioThread(audio.start);
    
    unsigned int start(uint9_t fps) {
        
        if (stopEngine == 0) {
            
            inputsThread.join();
            internetThread.join();
            twodThread.join();
            threedThread.join();
            playerThread.join();
            physicsThread.join();
            graphicsThread.join();
            cameraThread.join();
            encryptionThread.join();
            decryptionThread.join();
            derivationThread.join();
            hashingThread.join();
            userinterface.join();
            audioThread.join();
            
            while (playingGame == 0) {
                
                engineThread.join();
                sleep(1000 / fps);
                
            }
            
        } else {
            
            
            
        };
        
    };
    
}
