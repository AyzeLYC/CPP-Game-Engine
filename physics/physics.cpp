#include <cmath>
#include <thread>

namespace physics {
    
    unsigned long long earthGravity = 0,
                       lightSpeed = 299792458;
    
    unsigned int calculateSoundSpeed(unsigned int specificHeatsRatio, unsigned int gasConstant, double temperature) {
        
        double absoluteTemperature,
               result;
        
        absoluteTemperature = 273.15 + temperature;
        result = sqrt(specificHeatsRatio * gasConstant * absoluteTemperature);
        return result;
        
    };
    unsigned int calculateCollision(unsigned int fps, unsigned int screenXSize, unsigned int screenYSize unsigned long long xPositions[2], unsigned long long yPositions[2], unsigned long long ePositions[2], unsigned long long speeds[2], unsigned long long objectsMass[2], unsigned int directionsDegrees[2]) {
        
        for (unsigned long long i; i < (2^(8*8)) || xPositions[0 : 1] < screenXSize + 1 || yPositions[0 : 1] < screenYSize + 1 || speeds[0 : 1] != 0; i++) {
            
            sleep(1000 / fps);
            
        };
        
    };
    unsigned int calculateCollisions(unsigned int fps, unsigned int screenXSize, unsigned int screenYSize, unsigned long long xPositions[], unsigned long long yPositions[], unsigned long long zPositions[], unsigned long long speeds[], unsigned long long objectsMass[], unsigned int directionsDegrees[]) {
        
        for (unsigned long long i; i < (2^(8*8)) || xPositions[0 : xPositions.length() - 1] < screenXSize + 1 || yPositions[0 : yPositions.length() - 1] < screenYSize + 1 || speeds[0 : speeds.length() - 1] != 0; i++) {
            
            sleep(1000 / fps);
            
        };
        
    };
    
}
