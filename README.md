# ImageTransform - C++ Image Processing Project

This repository contains the implementation of the Image Transform project. The project demonstrates basic image manipulation techniques using object-oriented programming concepts in C++.

## Project Description

The goal of this project is to perform transformations on PNG images using custom image processing functions. It involves building a custom pixel class (HSLAPixel), working with an existing PNG class, and implementing several image transformation functions.

This project is divided into two main parts:

1. Creation of the HSLAPixel class to represent image pixels using the HSL (Hue, Saturation, Luminance) color space.
2. Implementation of several image manipulation functions using this class and a provided PNG library.

## Project Structure

The project consists of the following key files:

- ImageTransform.cpp: Contains the image transformation functions to be implemented.
- ImageTransform.h: The header file for the transformation functions.
- uiuc/HSLAPixel.cpp: Implementation of the HSLAPixel class.
- uiuc/HSLAPixel.h: Declaration of the HSLAPixel class.
- main.cpp: The main program that loads input images, applies transformations, and saves the output images.
- Makefile: Used to build the project and run tests.

## Function Descriptions

The following image transformation functions are implemented in this project:

### original image

<img width="900" height="600" alt="alma" src="https://github.com/user-attachments/assets/832f6b70-aa9b-4d05-902d-fe84fd1ef6af" />


### 1. grayscale

This function converts a colored image to grayscale by setting the saturation of every pixel to zero. It removes all color while preserving the luminance.

<img width="900" height="600" alt="out-grayscale" src="https://github.com/user-attachments/assets/29353d3f-23f4-42a3-abe0-fad86729d2a2" />


### 2. illinify

This function changes the hue of every pixel in the image to either 11 (Illini Orange) or 216 (Illini Blue), depending on which hue is closer to the original pixel hue. This transformation simplifies the image to use only the university’s signature colors.

<img width="900" height="600" alt="out-illinify" src="https://github.com/user-attachments/assets/44b69cb2-7f99-44f1-bfb1-9df62949f003" />


### 3.spotlight

This function creates a spotlight effect centered at a specified (x, y) coordinate. It reduces the luminance of each pixel based on its distance from the center. The luminance decreases by 0.5 percent per pixel of distance, with a maximum decrease of 80 percent for pixels far from the center.

<img width="900" height="600" alt="out-spotlight" src="https://github.com/user-attachments/assets/fd381050-44e5-4f70-81e3-44da473c185d" />


### 4.watermark

This function adds a watermark to a base image using a stencil image. For each overlapping pixel, if the stencil image has maximum luminance (1.0) at that pixel, the base image's luminance is increased by 0.2 (up to a maximum of 1.0).

<img width="900" height="600" alt="out-watermark" src="https://github.com/user-attachments/assets/de634df5-0229-424d-82ae-e185b92cc65a" />


## Compilation and Usage

To compile the project, use the following command in the terminal from the directory containing the Makefile:

make

To run the program after compilation:

./ImageTransform

To run the unit tests:

make test
./test

To clean all compiled files:

make clean

## Requirements

- A C++ compiler that supports C++11 or higher
- Make utility
- PNG library files


