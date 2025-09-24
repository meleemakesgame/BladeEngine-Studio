#pragma once

#include <cstdint>
#include "../headers/vector.hpp"

class RGB
{
    public:
        uint8_t R = 0;
        uint8_t G = 0;
        uint8_t B = 0;

        // Constructors
        RGB(); // Default constructor
        RGB(uint8_t R, uint8_t G, uint8_t B); // Parameterized constructor

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
        uint8_t R = 0;
        uint8_t G = 0;
        uint8_t B = 0;
        uint8_t A = 0;

        // Constructors
        RGBA(); // Default constructor
        RGBA(uint8_t R, uint8_t G, uint8_t B, uint8_t A); // Parameterized constructor

        // Operator Overloads
        RGBA operator+(const RGBA& other) const;
        RGBA operator-(const RGBA& other) const;
        RGBA operator*(const RGBA& other) const;
        RGBA operator/(const RGBA& other) const;

        // Member Functions
        float4 normalize(); // converts an RGBA Value (0-255) to a normalized decimal value (0-1)
};