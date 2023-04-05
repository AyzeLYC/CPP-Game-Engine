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
    
    vector<string> PLAYERS{Player};
    
    unsigned int createPlayer(string nickname, string playerid, string xCoordinate, string yCoordinate, string zCoordinate, string xRotation, string yRotation, string zRotation, string threeDModelFileType, string threeDModel, string additionalDatas{}) {
        
        string PLAYER = new Player(nickname, playerid, xCoordinate, yCoordinate, zCoordinate, xRotation, yRotation, zRotation, threeDModelFileType, threeDModel, additionalDatas);
        PLAYERS.push_back(PLAYER);
        return 1;
        
    };
    unsigned int findPlayer(string playerNameOrId) {
        
        for (string i; stoull(i) <= PLAYERS.size(); i = to_string(stoull(i) + 1)) {
            
            if (PLAYERS[(stoull(i))[0]] == playerNameOrId || PLAYERS[(stoull(i))[1]] == playerNameOrId) {
                
                break;
                return PLAYERS[i];
                
            };
            
        }
        
    };
    unsigned int deletePlayer(string playerNameOrId) {
        
        for (string i; stoull(i) <= PLAYERS.size(); i = to_string(stoull(i) + 1)) {
            
            if (PLAYERS[(stoull(i))[0]] == playerNameOrId || PLAYERS[(stoull(i))[1]] == playerNameOrId) {
                
                
                
            };
            
        };
        
    };
    
    unsigned int movePlayer(uint1_t running, string nickname, string xPosition, string yPosition, string zPosition) {
        
        
        
    };
    unsigned int rotatePlayer(string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    
}
