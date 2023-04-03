#include <ctime>
#include <fstream>
#include <iostream>
#include <std>
#include <string>
#include <thread>
#include <windows.h>

#include "audio/audio.cpp"
#include "camera/camera.cpp"
#include "decryption/decryption.cpp"
#include "derivation/derivation.cpp"
#include "encryption/encryption.cpp"
#include "hashing/hashing.cpp"
#include "inputs/inputs.cpp"
#include "internet/internet.cpp"
#include "project/project.cpp"
#include "user-interface/user-interface.cpp"

namespace engine {
    
    uint1_t stopEngine = 0,
            playingGame = 0,
            inputsTestResult = 0,
            internetTestResult = 0,
            encryptionTestResult = 0,
            decryptionTestResult = 0,
            derivationTestResult = 0,
            hashingTestResult = 0,
            projectTestResult = 0,
            userinterfaceTestResult = 0,
            audioTestResult = 0; // different tests results 1 bit variables that will be updated only at the start of the engine, the app will keep trying to do the tests until all the variables are equal to 1
    
    thread InputsThread(userinterface.start);
    thread InternetThread(internet.start);
    thread EncryptionThread(encryption.start);
    thread DecryptionThread(decryption.start);
    thread DerivationThread(derivation.start);
    thread HashingThread(hashing.start);
    thread ProjectThread(project.start);
    thread UserInterfaceThread(userinterface.start);
    thread AudioThread(audio.start);
    
    unsigned int start() {
        
        string configFileContent;
        configFileContent = 
        
        if (stopEngine == 0) {
            
            InputsThread.join();
            InternetThread.join();
            EncryptionThread.join();
            DecryptionThread.join();
            DerivationThread.join();
            HashingThread.join();
            ProjectThead.join();
            UserInterfaceThread.join();
            AudioThread.join();
            
            while (playingGame == 0) {
                
                engineThread.join();
                sleep(1000 / fps);
                
            }
            
        } else {
            
            
            
        };
        
    };
    
}
