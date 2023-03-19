#include <string>

namespace camera {
    
    string cameras = {};
    
    struct Camera {
        
        string defaultXCoordinate,
               defaultYCoordinate,
               defaultZCoordinate,
               defaultXRotation,
               defaultYRotation,
               defaultZRotation,
               xCoordinate,
               yCoordinate,
               zCoordinate;
               xRotation,
               yRotation,
               zRotation;
        uint1_t cameraEnabled,
                filterEnabled;
        uint24_t filter;
        
    }
    
    unsigned int createCamera(string defaultXCoordinate, string defaultYCoordinate, string defaultZCoordinate, string defaultXRotation, string defaultYRotation, string defaultZRotation, uint1_t cameraEnabled, uint1_t filterEnabled, uint24_t filter) {
        
        Camera CAMERA = Camera(defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, cameraEnabled, filterEnabled, filter));
        cameras.append(CAMERA);
        return cameras.size();
        
    };
    unsigned int findCamera(string defaultXCoordinate, string defaultYCoordinate, string defaultZCoordinate, string defaultXRotation, string defaultYRotation, string defaultZRotation, uint1_t cameraEnabled, uint1_t filterEnabled, uint24_t filter) {
        
        for (string i; stoul(i, nullptr, 0) < cameras.size(); i = to_string(stoul(i, 0, 10) + 1)) {
            
            if (cameras[i] = [defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, cameraEnabled, filterEnabled, filter]) {
                
                return true;
                
            };
            
        };
        
    };
    
    
    unsigned int instantlyMoveCamera(string cameraId, string xPosition, string yPosition, string zPosition) {
        
        if (cameras.find(cameraId, 0, 10) == true) {
            
            
            
        } else {
            
            return "You can't move the camera since it don't exist in the cameras list !";
            
        };
        
    };
    unsigned int moveCamera(string cameraId, string xPosition, string yPosition, string zPosition, string timing) {
        
        
        
    };
    unsigned int instantlyRotateCamera(string cameraId, string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    unsigned int rotateCamera(string cameraId, string xRotation, string yRotation, string zRotation, string timing) {
        
        
        
    };
    unsigned int repositionCamera(string cameraId) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[stoull(cameraId)[3 : 5]] != cameras[stoull(cameraId)[0 : 2]]) {
            
            cameras[stoull(cameraId)[3 : 5] = cameras[stoull(cameraId)[0 : 2]]];
            return true;
            
        } else {
            
            return "Error, the camera ".append(cameraId.append(" can't be repositioned since there is less cameras than the one you tried to reposition or the camera is already positioned at its default position"));
            
        };
        
    };
    
    unsigned int enableCamera(string cameraId) {
        
        
        
    };
    unsigned int disableCamera(string cameraId) {
        
        
        
    };
    
    unsigned int enableCameraFilter(string cameraId) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[stoull(cameraId)[13]] == false) {
            
            cameras[stoull(cameraId)[13]] = true;
            
        } else {
            
            
            
        };
        
    };
    unsigned int modifyCameraFilter(string cameraId, uint24_t newFilter) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[stoull(cameraId)[14]]) {
            
            cameras[stoull()]
            
        } else {
            
            
            
        };
        
    };
    unsigned int disableCameraFilter(string cameraId) {
        
        if (cameras.size() >= stoul(cameraId) && cameras[stoul(cameraId)[13]] == true) {
            
            cameras[stoull(cameraId)[12]] = false;
            return true;
            
        } else {
            
            return "Error while trying to disable the filter of the camera".append(stoull(cameraId))
            
        };
        
    };
    
    
    unsigned int deleteCamera(string cameraId) {
        
        
        
    };
    
}
