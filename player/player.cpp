#include <string>

namespace player {
    
    struct Player {
        
        string nickname,
               xCoordinate = 0,
               yCoordinate = 0,
               zCoordinate = 0,
               headXRotation = 0,
               headYRotation = 0,
               headZRotation = 90,
               leftArmXRotation = 90,
               leftArmYRotation = 0,
               leftArmZRotation = 0,
               rightArmXRotation = 270,
               rightArmYRotation = 0,
               rightArmZRotation = 0,
               leftHandXRotation = 90,
               leftHandYRotation = 0,
               leftHandZRotation = 0,
               rightHandXRotation = 270,
               rightHandYRotation = 0,
               rightHandZRotation = 0,
               torsoXRotation = 0,
               torsoYRotation = 0,
               torsoZRotation = 90,
               leftLegXRotation = 0,
               leftLegYRotation = 0,
               leftLegZRotation = 0,
               rightLegXRotation = 0,
               rightLegYRotation = 0,
               rightLegZRotation = 0,
               leftFootXRotation = 0,
               leftFootYRotation = 0,
               leftFootZRotation = 0,
               rightFootXRotation = 0,
               rightFootYRotation = 0,
               rightFootZRotation = 0;
        struct weapon {
            
            string name = "NONE",
                   type = "NONE",
                   threeDObject = [];
            unsigned short int damages = {
                
                "head": 0,
                "torso": "0",
                "arm": 0,
                "hand": 0,
                "leg": 0,
                "foot": 0
                
            }
            
        }
        
    }
    
    unsigned int createPlayer() {
        
        
        
    };
    
    unsigned int movePlayer(uint1_t running, string xPosition, string yPosition, string zPosition) {
        
        
        
    };
    unsigned int rotatePlayer(string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    
    unsigned int deletePlayer() {
        
        
        
    };
    
}
