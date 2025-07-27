/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 */

#include "HSLAPixel.h"

namespace uiuc {

// Default constructor — white and fully opaque
HSLAPixel::HSLAPixel() {
    h = 0;
    s = 0;
    l = 1;
    a = 1;
}

// Constructor with hue, saturation, luminance
HSLAPixel::HSLAPixel(double hue, double saturation, double luminance) {
    h = hue;
    s = saturation;
    l = luminance;
    a = 1;
}

// Constructor with hue, saturation, luminance, and alpha
HSLAPixel::HSLAPixel(double hue, double saturation, double luminance, double alpha) {
    h = hue;
    s = saturation;
    l = luminance;
    a = alpha;
}

}

