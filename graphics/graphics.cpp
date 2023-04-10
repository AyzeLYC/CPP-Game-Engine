#include <fstream>
#include <string>
#include <thread>

#ifdef windows
#include <win32.h>
#include <winuser.h>
#endif

#include "../2d/2d.cpp"
#include "../3d/3d.cpp"
#include "../amd/fsr/fsr.cpp"
#include "../apple/opencl/opencl.cpp"
#include "../camera/camera.cpp"
#include "../khronos-group/vulkan/vulkan.cpp"
#include "../microsoft/directx/directx.cpp"
#include "../nvidia/cuda/cuda_runtime.h"
#include "../nvidia/dlss/dlss.cpp"
#include "../nvidia/dsr/dsr.cpp"
#include "../nvidia/flex/flex.cpp"
#include "../nvidia/flow/flow.cpp"
#include "../nvidia/iray/iray.cpp"
#include "../nvidia/mdl/mdl.cpp"
#include "../nvidia/mvr/mvr.cpp"
#include "../nvidia/optix/optix.cpp"
#include "../nvidia/physx/physx.cpp"
#include "../nvidia/rtd/rtd.cpp"
#include "../nvidia/rtxdi/rtxdi.cpp"
#include "../nvidia/rtxgi/rtxgi.cpp"
#include "../nvidia/tss/tss.cpp"
#include "../nvidia/vrs/vrs.cpp"
#include "../physics/physics.cpp"
#include "../ray-tracing/ray-tracing.cpp"
#include "../silicon-graphics/opengl/opengl.cpp"

namespace graphics {
    
    struct object {
        
        string name,
               threedModelFileExtension,
               threedModelsPositions[],
               threedModels[],
               textureFileExtension,
               texturesPosition[],
               textures[];
        uint8_t opacity;
        
    }
    
    string objects[];
    
    if (parameters.CPU == 0 && parameters.CUDA == 0 && parameters.TENSOR == 0) {
        
        std::cout << "Impossible to not get any device computing the graphics !" << std::endl;
        parameters.CPU = 1;
        
    } else if (parameters.CPU == 1 && parameters.CUDA == 0 && parameters.TENSOR == 0) {
        
        
        
    } else if (parameters.CPU == 1 && parameters.CUDA == 1 && parameters.TENSOR == 0) {
        
        
        
    } else if (parameters.CPU == 1 && parameters.CUDA == 1 && parameters.TENSOR == 0) {
        
        
        
    } else if (parameters.CPU == 1 && parameters.CUDA == 1 && parameters.TENSOR == 1) {
        
        
        
    };
    
}
