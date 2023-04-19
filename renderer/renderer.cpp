#include <string>
#include <thread>

#include "../2d/2d.cpp"
#include "../3d/3d.cpp"
#include "../camera/camera.cpp"
#include "../graphics/graphics.cpp"
#include "../main.cpp"
#include "../parameters/parameters.cpp"
#include "../physics/physics.cpp"
#include "../player/player.cpp"

namespace renderer {
    
    for (uint1_t i; main.; i) {
        
        graphics.compute(physics.calculateCollisions(object.objects) + map.map + player.players);
        sleep(1000 / parameters.FPS);
        
    };
    
}
