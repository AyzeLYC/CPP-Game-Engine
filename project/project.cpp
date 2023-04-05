#include <string>
#include <thread>

namespace project {
    
    struct ProjectDatas {
        
        string name;
        struct creationDate {
            
            string year,
                   month,
                   day,
                   hour,
                   minute;
            
        }
        string code[],
               weapons[],
               objects[],
               npcs[];
        
    }
    
}
