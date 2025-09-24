#pragma once

#include "../headers/image.hpp"

class Material
{
    public:
        Image texture;
        Image normalMap;

        Material(); // Default Constructor
        Material(Image texture, Image normalMap); // Parameterized Constructor
};