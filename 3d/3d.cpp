#include <fstream>
#include <string>

namespace threedimension {
    
    unsigned int cubeVolumeEquation(unsigned int size) {
        
        unsigned long long result;
        
        result = size * size * size;
        return result;
        
    };
    unsigned int cuboidVolumeEquation(unsigned int length, unsigned int width, unsigned int height) {
        
        unsigned long long result;
        
        result = length * width * height;
        return result;
        
    };
    
    unsigned int pyramidVolumeEquation(unsigned int length, unsigned int width, unsigned int height) {
        
        unsigned double result;
        
        result = length * width * height / 3;
        return result;
        
    };
    unsigned int octahedronVolumeEquation(unsigned int length, unsigned int width, unsigned int height) {
        
        
        
    };
    
    unsigned int cylinderVolumeEquation(uint1_t inputType, unsigned int InpuT, unsigned int height) {
        
        unsigneed double result;
        
    };
    unsigned int tubeVolumeEquation(uint1_t inputType, unsigned int InpuT, unsigned int thickness, unsigned int height) {
        
        unsigned double result;
        
    };
    
    unsigned int torusVolumeEquation(unsigned int radiusA, unsigned int radiusB) {
        
        unsigned double result;
        
    };
    
    unsigned int sphereCircumferenceEquation(uint1_t inputType, unsigned int InpuT) {
        
        unsigned double result;
        
    };
    unsigned int sphereVolumeEquation(uint2_t inputType, unsigned float InpuT) {
        
        unsigned double result;
        
    };
    
    
    unsigned int object() {
        
        struct objFile {
            
            
            
        }
        struct stepFile {
            
            
            
        }
        struct stlFile {
            
            
            
        }
        
        string objects[];
        
    };
    
}
