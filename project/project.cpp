#include <string>
#include <thread>

namespace project {
    
    struct creationDate {
        
        string year,
               month,
               day,
               hour,
               minute;
        
    },
          movingPath {
        
        string startingXPosition,
               startingYPosition,
               startingZPosition,
               endingXPosition,
               endingYPosition,
               endingZPosition,
               movements[];
        
    },
          object {
        
        string name,
               xPosition,
               yPosition,
               zPosition,
               xRotation,
               yRotation,
               zRotation;
        uint1_t canDoDamages,
                canShoot;
        string damages;
        bullet bullets[];
        
    },
          weapons {
        
        string name;
        uint1_t canShootBullets;
        string object;
        bullet bullets[];
        
    },
          bullet {
        
        string name,
               caliber,
               damages,
               object;
        
    },
          npc {
            
            string name;
            uint1_t canMove,
                    canTalk,
                    canShoot,
                    canTakeDamages;
            movingPath movingPaths[];
            string code;
            weapons npcWeapons[];
            
    },
           ProjectDatas {
        
        string version,
               name;
        creationDate projectCreationDate;
        string code[];
        object objects[];
        weapon weapons[];
        npc npcs[];
        
    }
    
}
