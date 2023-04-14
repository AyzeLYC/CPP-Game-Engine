#include <string>
#include <thread>
#include <vector>

#include "./project/project.cpp"

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
        project.object playerObjectsInventory[];
        project.weapon playerWeaponsInventory[];
        project.bullet playerBulletsInventory[];
        project.achievement playerAchievementsInventory[];
        
    }
    
    vector<string> players{Player};
    
    unsigned int createPlayer(string nickname, string playerid, string xCoordinate, string yCoordinate, string zCoordinate, string xRotation, string yRotation, string zRotation, string threeDModelFileType, string threeDModel, string additionalDatas{}) {
        
        string PLAYER = new Player(nickname, playerid, xCoordinate, yCoordinate, zCoordinate, xRotation, yRotation, zRotation, threeDModelFileType, threeDModel, additionalDatas);
        players.push_back(PLAYER);
        return 1;
        
    };
    unsigned int findPlayer(string playerNameOrId) {
        
        for (string i; stoull(i) <= players.size(); i = to_string(stoull(i) + 1)) {
            
            if (players[(stoull(i))[0]] == playerNameOrId || players[(stoull(i))[1]] == playerNameOrId) {
                
                break;
                return players[stoull(i)];
                
            };
            
        }
        
    };
    unsigned int deletePlayer(string playerNameOrId) {
        
        for (string i; stoull(i) <= players.size(); i = to_string(stoull(i) + 1)) {
            
            if (players[(stoull(i))[0]] == playerNameOrId || players[(stoull(i))[1]] == playerNameOrId) {
                
                break;
                return players[stoull(i)];
                
            };
            
        };
        
    };
    
    unsigned int movePlayer(uint1_t running, string nickname, string xPosition, string yPosition, string zPosition) {
        
        
        
    };
    unsigned int rotatePlayer(string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    
}
