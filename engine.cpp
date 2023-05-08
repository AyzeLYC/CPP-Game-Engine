#ifdef windows
#include <windows.h>
#include <winuser.h>
#elif linux
#include <asm/access.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <sys>
#include <unistd.h>
#elif openos
#include <os.cpp>
#endif

#include <array>
#include <ctime>
#include <fstream>
#include <iostream>
#include <std>
#include <string>
#include <thread>

#include "audio/audio.cpp"
#include "camera/camera.cpp"
#include "decryption/decryption.cpp"
#include "derivation/derivation.cpp"
#include "encryption/encryption.cpp"
#include "hashing/hashing.cpp"
#include "inputs/inputs.cpp"
#include "internet/internet.cpp"
#include "project/project.cpp"
#include "renderer/renderer.cpp"
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
            audioTestResult = 0, // different tests results 1 bit variables that will be updated only at the start of the engine, the app will keep trying to do the tests until all the variables are equal to 1
            cursorVisible = 1,
            fullScreen = 0;
    unsigned long long windowXSize,
                       windowYSize;
    
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
        
        string configFileContent = fstream("C:\Users"  "\AppData\Roaming\Easy-Engine\config.json", ios::in);
        
        if (stopEngine == 0 && fullScreen == 0) {
            
            inputsTestResult = InputsThread.join();
            internetTestResult = InternetThread.join();
            encryptionTestResult = EncryptionThread.join();
            decryptionTestResult = DecryptionThread.join();
            derivationTestResult = DerivationThread.join();
            hashingTestResult = HashingThread.join();
            projectTestResult = ProjectThead.join();
            userinterfaceTestResult = UserInterfaceThread.join();
            audioTestResult = AudioThread.join();
            
            RECT desktop;
            const HWND hDesktop = GetDesktopWindow();
            GetWindowRect(hDesktop, &desktop);
            GetDesktopResolution(windowXSize, windowYSize);
            
            while (playingGame == 1) {
                
                sleep(1000 / fps);
                
            }
            
        } else if (stopEngine == 0 && fullScreen = 1) {
            
            inputsTestResult = InputsThread.join();
            internetTestResult = InternetThread.join();
            encryptionTestResult = EncryptionThread.join();
            decryptionTestResult = DecryptionThread.join();
            derivationTestResult = DerivationThread.join();
            hashingTestResult = HashingThread.join();
            projectTestResult = ProjectThead.join();
            userinterfaceTestResult = UserInterfaceThread.join();
            audioTestResult = AudioThread.join();
            
            RECT desktop;
            const HWND hDesktop = GetDesktopWindow();
            GetWindowRect(hDesktop, &desktop);
            GetDesktopResolution(windowXSize, windowYSize);
            
            while (playingGame == 1) {
                
                sleep(1000 / fps);
                
            }
            
        } else {
            
            
            
        };
        
    };
    
}
