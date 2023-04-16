#include <string>
#include <thread>
#include <vector>

#include "../object/object.cpp"
#include "../project/project.cpp"

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
        project.npc playerNpcsInventory[];
        project.achievement playerAchievementsInventory[];
        
    }
    
    Player players[];
    
    unsigned int createPlayer(string nickname, string playerid, string xCoordinate, string yCoordinate, string zCoordinate, string xRotation, string yRotation, string zRotation, string threeDModelFileType, string threeDModel, string additionalDatas{}) {
        
        string PLAYER = new Player(nickname, playerid, xCoordinate, yCoordinate, zCoordinate, xRotation, yRotation, zRotation, threeDModelFileType, threeDModel, additionalDatas);
        players.push_back(PLAYER);
        return 1;
        
    };
    unsigned int findPlayer(string playerNameOrId) {
        
        for (string i; stoull(i) <= players.size(); i = to_string(stoull(i) + 1)) {
            
            if (players[(stoull(i))[0]] == playerNameOrId || players[(stoull(i))[1]] == playerNameOrId) {
                
                break;
                return i;
                
            };
            
        }
        
    };
    unsigned int deletePlayer(string nickname) {
        
        string userDbSpace = findPlayer(nickname);
        players[stoull(userDbSpace)].delete();
        return true;
        
    };
    
    unsigned int movePlayer(uint1_t running, string nickname, string xPosition, string yPosition, string zPosition) {
        
        string userDbSpace = findPlayer(nickname);
        players[stoull(userDbSpace) [2]] = xPosition;
        players[stoull(userDbSpace) [3]] = yPosition;
        players[stoull(userDbSpace) [4]] = zPosition;
        object.players.refresh();
        
    };
    unsigned int rotatePlayer(string nickname, string xRotation, string yRotation, string zRotation) {
        
        string userDbSpace = findPlayer(nickname);
        players[stoull(userDbSpace) [5]] = xRotation;
        players[stoull(userDbSpace) [6]] = xRotation;
        players[stoull(userDbSpace) [7]] = xRotation;
        object.players.refresh();
        
    };
    
}
