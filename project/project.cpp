#include <string>
#include <thread>

#include "../renderer/renderer.cpp"

namespace project {
    
    struct creationDate {
        
        string year,
               month,
               day,
               hour,
               minute;
        
    }
    struct movement {
        
        string Movement,
               speed,
               speedType,
               distance,
               distanceType;
        
    };
    struct movingPath {
        
        vector3 startingPosition;
        vector3 endingPosition;
        movement movements[];
        
    }
    struct object {
        
        string name;
        vector3 position
        vector3 rotation;
        uint1_t canDoDamages,
                canShoot;
        string price,
               damages,
               code;
        bullet bullets[];
        
    }
    struct weapon {
        
        string name;
        uint1_t canShootBullets;
        string price,
               damages,
               object,
               sound,
               code;
        bullet bullets[];
        
    }
    struct bullet {
        
        string name,
               caliber,
               price,
               amount,
               object,
               sound;
        uint1_t sumbittedToGravity;
        string code;
        
    }
    struct npc {
            
            string name;
            uint1_t canMove,
                    canTalk,
                    canShoot,
                    canTakeDamages,
                    canTakeFallingDamages;
            movingPath movingPaths[];
            string code;
            weapon weapons[];
            bullet bullets[];
            
    }
    struct achievement {
        
        string name,
               text,
               image,
               sound;
        uint1_t unlocked;
        
    }
    struct ProjectDatas {
        
        string version,
               name;
        creationDate projectCreationDate;
        movingPath movingPaths[];
        object objects[];
        weapon weapons[];
        bullet bullets[];
        npc npcs[];
        achievement achievements[];
        string code[];
        
    }
    
    unsigned int createProjectFile(projectDatas ProjectDatas) {
        
        
        
    };
    unsigned int loadProject() {
        
        
        
    };
    
}
