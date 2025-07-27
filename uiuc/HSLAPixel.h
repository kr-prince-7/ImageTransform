/**
 * @file HSLAPixel.h
 *
 * @author 
 * University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>

namespace uiuc {

  class HSLAPixel {
    public:
      double h;  // Hue: [0, 360]
      double s;  // Saturation: [0, 1]
      double l;  // Luminance: [0, 1]
      double a;  // Alpha: [0, 1]

      // Default constructor: white, fully opaque
      HSLAPixel();

      // Constructor with hue, saturation, luminance
      HSLAPixel(double hue, double saturation, double luminance);

      // Constructor with hue, saturation, luminance, alpha
      HSLAPixel(double hue, double saturation, double luminance, double alpha);
  };

}

