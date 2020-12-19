#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
    public:
        ray() {}
        ray(const point3& origin, const vec3& direction)  
            : orig(origin), dir(direction)
        {}

        point3 origin() const  { return orig; } //access to origin
        vec3 direction() const { return dir; }  //access to direction

        point3 at(double t) const {   //function to be able to 'move' within 3D space
            return orig + t*dir;
        }

    public: //split functions from variables
        point3 orig;
        vec3 dir;
};

#endif
