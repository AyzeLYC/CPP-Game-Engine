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
    unsigned int calculateCollisions(unsigned int fps, unsigned long long xPositions[], unsigned long long yPositions[], unsigned long long zPositions[], unsigned long long speeds[], unsigned int objectsMass[], unsigned int directionsDegrees[]) {
        
        for () {
            
            sleep(1000 / fps);
            
        };
        
    };
    
}
