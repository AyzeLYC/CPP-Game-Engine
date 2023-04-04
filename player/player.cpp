#include <string>
#include <thread>
#include <vector>

namespace player {
    
    struct Player {
        
        string nickname,
               playerId,
               xCoordinate,
               yCoordinate,
               zCoordinate,
               xRotation,
               yRotation,
               zRotation,
               threeDModelFileType,
               threeDModel,
               playerAdditionalDatas{};
            
        }
        
    }
    
    string playerDatas{};
    vector<string> PLAYERS{Player("", "", stoll(0), stoll(0), stoll(0), stoll(0), stoll(0), stoll(0), "OBJ", defaultPlayerModel, playerDatas)};
    
    unsigned int createPlayer(string nickname, string playerid, string xCoordinate, string yCoordinate, string zCoordinate, string xRotation, string yRotation, string zRotation, string threeDModelFileType, string threeDModel, string additionalDatas{}) {
        
        string PLAYER = new Player(nickname, playerid, xCoordinate, yCoordinate, zCoordinate, xRotation, yRotation, zRotation, threeDModelFileType, threeDModel, additionalDatas);
        PLAYERS.push_back(PLAYER);
        return 1;
        
    };
    
    unsigned int movePlayer(uint1_t running, string nickname, string xPosition, string yPosition, string zPosition) {
        
        
        
    };
    unsigned int rotatePlayer(string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    
    unsigned int deletePlayer() {
        
        
        
    };
    
}
