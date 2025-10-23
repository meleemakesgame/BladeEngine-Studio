#pragma once

#include <cstdint>
#include "../headers/vector.hpp"

class RGB
{
    public:
        unsigned int R = 0;
        unsigned int G = 0;
        unsigned int B = 0;

        // Constructors
        RGB(); // Default constructor
        RGB(unsigned int R, unsigned int G, unsigned int B); // Parameterized constructor

        // Operator Overloads
        RGB operator+(const RGB& other) const;
        RGB operator-(const RGB& other) const;
        RGB operator*(const RGB& other) const;
        RGB operator/(const RGB& other) const;

        // Member Functions
        float3 normalize(); // converts an RGB Value (0-255) to a normalized decimal value (0-1)
};

class RGBA
{
    public:
        unsigned int R = 0;
        unsigned int G = 0;
        unsigned int B = 0;
        unsigned int A = 0;

        // Constructors
        RGBA(); // Default constructor
        RGBA(unsigned int R, unsigned int G, unsigned int B, unsigned int A); // Parameterized constructor

        // Operator Overloads
        RGBA operator+(const RGBA& other) const;
        RGBA operator-(const RGBA& other) const;
        RGBA operator*(const RGBA& other) const;
        RGBA operator/(const RGBA& other) const;

        // Member Functions
        float4 normalize(); // converts an RGBA Value (0-255) to a normalized decimal value (0-1)
};