#include <string>

namespace camera {
    
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
    
    string cameras = [];
    
    unsigned int createCamera(string defaultXCoordinate, string defaultYCoordinate, string defaultZCoordinate, string defaultXRotation, string defaultYRotation, string defaultZRotation, uint1_t cameraEnabled, uint1_t filterEnabled, uint24_t filter) {
        
        Camera CAMERA = Camera(defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, cameraEnabled, filterEnabled, filter));
        cameras.append(CAMERA);
        return cameras.size();
        
    };
    unsigned int findCameraFromDatas(string defaultXCoordinate, string defaultYCoordinate, string defaultZCoordinate, string defaultXRotation, string defaultYRotation, string defaultZRotation, uint1_t cameraEnabled, uint1_t filterEnabled, uint24_t filter) {
        
        if (cameras.include([defaultXCoordinate, defaultYCoordinate, defaultZCoordinate, defaultXRotation, defaultYRotation, defaultZRotation, cameraEnabled, filterEnabled, filter]) == true) {
            
            return true;
            
        } else {
            
            return false;
            
        };
        
    };
    
    
    unsigned int instantlyMoveCamera(string cameraId, string xCoordinate, string yCoordinate, string zCoordinate) {
        
        if (cameras.size >= stoull(cameraId)) {
            
            cameras[(stoull(cameraId))[6 : 8]] = [xCoordinate, yCoordinate, zCoordinate];
            return true;
            
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
        
        if (cameras.size() >= cameraId && cameras[(cameraId)[3 : 5]] != cameras[(cameraId)[0 : 2]]) {
            
            cameras[(cameraId)[3 : 5] = cameras[(cameraId)[0 : 2]]];
            return true;
            
        } else {
            
            return "Error, the camera ".append(cameraId.append(" can't be repositioned since there is less cameras than the one you tried to reposition or the camera is already positioned at its default position"));
            
        };
        
    };
    
    unsigned int enableCamera(string cameraId) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[(stoull(cameraId))[12]] == false) {
            
            cameras[(stoull(cameraId))[12]] = true;
            return true;
            
        } else {
            
            return false;
            
        };
        
    };
    unsigned int disableCamera(string cameraId) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[(stoull(cameraId))[12]] == true) {
            
            cameras[(stoull(cameraId))[12]] = false;
            return true;
            
        } else {
            
            return false;
            
        };
        
    };
    
    unsigned int enableCameraFilter(string cameraId) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[(stoull(cameraId))[13]] == false) {
            
            cameras[(cameraId)[13]] = true;
            return true;
            
        } else {
            
            return false;
            
        };
        
    };
    unsigned int modifyCameraFilter(string cameraId, uint24_t newFilter) {
        
        if (cameras.size() >= stoull(cameraId) && cameras[stoull(cameraId)[14]] != newFilter) {
            
            cameras[(stoull(cameraId))[14]] = newFilter;
            return true;
            
        } else {
            
            return false;
            
        };
        
    };
    unsigned int disableCameraFilter(string cameraId) {
        
        if (cameras.size() >= stoul(cameraId) && cameras[stoul(cameraId)[13]] == true) {
            
            cameras[(stoull(cameraId))[13]] = false;
            return true;
            
        } else {
            
            return "Error while trying to disable the filter of the camera" + stoull(cameraId);
            
        };
        
    };
    
    
    unsigned int deleteCamera(string cameraId) {
        
        
        
    };
    
}
