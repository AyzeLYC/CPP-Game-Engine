#include <cmath>

namespace physics {
    
    unsigned long long earthGravity = 0,
                       lightSpeed = 299792458;
    
    unsigned int calculateSoundSpeed(unsigned int specificHeatsRatio, unsigned int gasConstant, float temperature) {
        
        double absoluteTemperature,
               result;
        
        absoluteTemperature = 273.15 + temperature;
        result = sqrt(specificHeatsRatio * gasConstant * absoluteTemperature);
        return result;
        
    };
    
    unsigned int collision(unsigned int xSpeed, unsigned int ySpeed, unsigned int zSpeed, unsigned int firstObjectMass, unsigned int secondObjectMass) {
        
        
        
    };
    
}
