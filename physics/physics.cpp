#include <cmath>
#include <thread>

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
    
    unsigned int collision(unsigned int fps, unsigned long xPositions[], unsigned long yPositions[], unsigned long long zPositions[], unsigned long long speeds[], unsigned int objectsMass[], unsigned int directionsDegrees[]) {
        
        unsigned int calculateCollision() {
            
            for () {
                
                sleep(1000 / fps);
                
            };
            
        };
        
    };
    
    unsigned int calculate(unsigned int datas) {
        
        string result;
        
        thread calculator(datas);
        calculator.join();
        
    };
    
}
