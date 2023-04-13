#include <fstream>
#include <std>
#include <string>

namespace parameters {
    
    struct parametersFileDatas {
        
        uint8_t fileVersion;
        uint16_t fps;
        string parametersName;
        
    }
    
    unsigned int createNewParametersFile(parametersFileDatas DATAS) {
        
        ofstream parametersFile("parameters.json");
      
        parametersFile << DATAS << std::endl;
        parametersFile.close();
        
    };
    unsigned int readParametersFile(string filePath) {
        
        ifstream parametersFile(filePath);
        
    };
    
}
