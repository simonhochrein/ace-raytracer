#ifndef __COLOUR_H__
#define __COLOUR_H__

#include "vec3.h"

#include <iostream>

using colour = vec3;

void write_colour(std::ostream &out, colour pixel_colour, int samples_per_pixel) {
    auto r = pixel_colour.x();
    auto g = pixel_colour.y();
    auto b = pixel_colour.z();

    auto scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;

    static const interval intensity(0.0, 0.99999);

    out << static_cast<int>(256 * intensity.clamp(r)) << ' '
        << static_cast<int>(256 * intensity.clamp(g)) << ' '
        << static_cast<int>(256 * intensity.clamp(b)) << '\n';
}

#endif//__COLOUR_H__
