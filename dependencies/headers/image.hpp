#pragma once

#include "../headers/color.hpp"

struct RGBPixel
{
    RGB value;
};

class Image
{
    public:
        // Constructors
        Image(); // Default
        Image(const char* filePath); // File
};