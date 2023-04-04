#include <string>
#include <thread>
#include <vector>

namespace player {
    
    struct Player {
        
        string xCoordinate = 0,
               yCoordinate = 0,
               zCoordinate = 0,
               xRotation = 0,
               yRotation = 0,
               zRotation = 0,
               threeDModelFileType = "",
               threeDModel = "",
               playerAdditionalDatas = {};
            
        }
        
    }
    
    vector<string> PLAYERS{Player};
    
    unsigned int createPlayer(string nickname, string xCoordinate, string yCoordinate, string zCoordinate, string xRotation, string yRotation, string zRotation, string threeDModel, string aditionalDatas{}) {
        
        string PLAYER = new Player(xCoordinate, yCoordinate, zCoordinate, xRotation, yRotation, zRotation, threeDModel, additionalDatas);
        PLAYER.append("'" +nickname +"': '" + PLAYER + "'");
        return 1;
        
    };
    
    unsigned int movePlayer(uint1_t running, string nickname, string xPosition, string yPosition, string zPosition) {
        
        
        
    };
    unsigned int rotatePlayer(string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    
    unsigned int deletePlayer() {
        
        
        
    };
    
}
