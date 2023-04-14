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
        string price,
               damages,
               code;
        bullet bullets[];
        
    },
          weapon {
        
        string name;
        uint1_t canShootBullets;
        string price,
               damages,
               object,
               sound,
               code;
        bullet bullets[];
        
    },
          bullet {
        
        string name,
               caliber,
               price,
               amount,
               object,
               sound;
        uint1_t sumbittedToGravity;
        string code;
        
    },
          npc {
            
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
            
    },
           achievement {
        
        string name,
               text,
               image,
               sound;
        uint1_t unlocked;
        
    },
           ProjectDatas {
        
        string version,
               name;
        creationDate projectCreationDate;
        object objects[];
        weapon weapons[];
        bullet bullets[];
        npc npcs[];
        achievement achievements[];
        string code[];
        
    }
    
}
