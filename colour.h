#ifndef __COLOUR_H__
#define __COLOUR_H__

#include "vec3.h"
#include "pixel.h"

using colour = vec3;

inline double linear_to_gamma(double linear_component) {
    return sqrt(linear_component);
}

void write_colour(pixel &out, colour pixel_colour, int samples_per_pixel);

#endif//__COLOUR_H__
