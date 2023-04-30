#include <fstream>
#include <string>
#include <vector>

#include "../files/files.cpp"
#include "../object/object.cpp"

namespace audio {
    
    namespace audioLocation {
        
        object.vector3 position;
        object.vector3 rotation;
        
    };
    
    unsigned int createAudioFile(string filePath, string fileName, strilg fileContent) {
        
        
        
    };
    unsigned int openAudioFile(string filePath, string fileName, string fileDataFormat) {
        
        string fileContent;
        
        fileContent = files.openFile(filePath, str(fileName + "." + fileDataFormat));
        
    };
    unsigned int readAudioFile(string fileContent) {
        
        
        
    };
    unsigned int deleteAudioFile(string filePath, string fileName) {
        
        
        
    };
    
    unsigned int spacializeAudio(string sounds[], audioLocation soundsLocations[]) {
        
        
        
    };
    
}
