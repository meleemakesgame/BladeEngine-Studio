#include "../headers/color.hpp"

RGB::RGB()
{
    R = G = B = 0;
}

RGB::RGB(unsigned int pR, unsigned int pG, unsigned int pB)
{
    R = pR;
    G = pG;
    B = pB;
}

RGBA::RGBA()
{
    R = G = B = 0;
    A = 255;
}

RGBA::RGBA(unsigned int pR, unsigned int pG, unsigned int pB, unsigned int pA)
{
    R = pR;
    G = pG;
    B = pB;
    A = pA;
}