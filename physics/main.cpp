#include <cmath>

namespace physics {
    
    unsigned long long lightSpeed = 299792458;
    
    unsigned int calculateSoundSpeed(unsigned int specificHeatsRatio, unsigned int gasConstant, float temperature) {
        
        double absoluteTemperature,
               result;
        
        absoluteTemperature = 273.15 + temperature;
        result = sqrt(specificHeatsRatio * gasConstant * absoluteTemperature);
        return result;
        
    };
    
}
