#include <string>
#include <thread>
#include <vector>

#include "../object/object.cpp"
#include "../project/project.cpp"

namespace player {
    
    struct Player {
        
        string nickname,
               playerId;
        uint1_t invisible;
        string xCoordinate,
               yCoordinate,
               zCoordinate,
               xRotation,
               yRotation,
               zRotation,
               threeDModelFileType,
               threeDModel,
               playerAdditionalDatas{};
        project.object objectsInventory[];
        project.weapon equippedWeapon;
        project.weapon weaponsInventory[];
        project.bullet bulletsInventory[];
        project.npc npcsInventory[];
        project.achievement achievementsInventory[];
        
    }
    
    vector<Player> players;
    
    unsigned int createPlayer(string nickname, string playerid, string xCoordinate, string yCoordinate, string zCoordinate, string xRotation, string yRotation, string zRotation, string threeDModelFileType, string threeDModel, string additionalDatas{}) {
        
        string PLAYER = new Player(nickname, playerid, xCoordinate, yCoordinate, zCoordinate, xRotation, yRotation, zRotation, threeDModelFileType, threeDModel, additionalDatas);
        players.push_back(PLAYER);
        object.players.refresh();
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
        
        console.datas.assert(0, nickname + " has left the game !");
        players.erase(stoull(userDbSpace));
        object.players.refresh();
        return true;
        
    };
    
    unsigned int movePlayer(uint1_t running, string nickname, string xPosition, string yPosition, string zPosition) {
        
        string playerPlayersDbSpace = findPlayer(nickname);
        players[stoull(playerPlayersDbSpace) [2]] = xPosition;
        players[stoull(playerPlayersDbSpace) [3]] = yPosition;
        players[stoull(playerPlayersDbSpace) [4]] = zPosition;
        object.players.refresh();
        
    };
    unsigned int rotatePlayer(string nickname, string xRotation, string yRotation, string zRotation) {
        
        string playerPlayersDbSpace = findPlayer(nickname);
        players[stoull(playerPlayersDbSpace) [5]] = xRotation;
        players[stoull(playerPlayersDbSpace) [6]] = xRotation;
        players[stoull(playerPlayersDbSpace) [7]] = xRotation;
        object.players.refresh();
        
    };
    
    unsigned int giveWeaponToPlayer(project.weapon Weapon) {
        
        if () {
            
            
            
        };
        
    };
    unsigned int changePlayerWeapon(string nickname, project.weapon Weapon) {
        
        string playerPlayersDbSpace = findPlayer(nickname);
        
        if (project.weapons.includes(weapon) && players[playerPlayersDbSpace [14]].includes(weapon)) {
            
            players[stoull(playerPlayersDbSpace) [14]] = Weapon;
            return 1;
            
        } else {
            
            console.datas.assert("The weapon is inexistant !");
            return 0;
            
        };
        
    };
    
}
