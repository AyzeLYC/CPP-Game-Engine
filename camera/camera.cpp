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
        bool cameraEnabled,
             filterEnabled;
        string filter;
        
    }
    
    unsigned int createCamera(string defaultXCoordinate, string defaultYCoordinate, string defaultZCoordinate, string defaultXRotation, string defaultYRotation, string defaultZRotation, bool cameraEnabled, bool filterEnabled, string filter) {
        
        Camera CAMERA = Camera(defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, cameraEnabled, filterEnabled, filter));
        cameras.append(CAMERA);
        return cameras.size();
        
    };
    unsigned int findCamera(string defaultXCoordinate, string defaultYCoordinate, string defaultZCoordinate, string defaultXRotation, string defaultYRotation, string defaultZRotation, bool cameraEnabled, bool filterEnabled, string filter) {
        
        for (string i; stoul(i, nullptr, 0) < cameras.size(); i = to_string(stoul(i, 0, 10) + 1)) {
            
            if (cameras[i] = [defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, cameraEnabled, filterEnabled, filter]) {
                
                
                
            };
            
        };
        
    };
    
    unsigned int instantlyMoveCamera(string cameraId, string xPosition, string yPosition, string zPosition) {
        
        if (cameras.size() >= cameraId) {
            
            
            
        } else {
            
            return "Error, the amount of cameras in the list is smaller than ".append(cameraId);
            
        };
        
    };
    unsigned int moveCamera(string cameraId, string xPosition, string yPosition, string zPosition, string timing) {
        
        
        
    };
    unsigned int instantlyRotateCamera(string cameraId, string xRotation, string yRotation, string zRotation) {
        
        
        
    };
    unsigned int rotateCamera(string cameraId, string xRotation, string yRotation, string zRotation, string timing) {
        
        
        
    };
    unsigned int repositionCamera(string cameraId) {
        
        if (cameras.size() >= cameraId) {
            
            
            
        } else {
            
            return "Error, the camera ".append(cameraId.append(" can't be repositioned since there is less cameras than the one you tried to reposition"));
            
        };
        
    };
    
    unsigned int deleteCamera(string cameraId) {
        
        
        
    };
    
}
