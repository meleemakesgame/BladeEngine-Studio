#pragma once

#include <vector>
#include "../headers/attribute.hpp"

class Component
{
    public:
        std::string Name;
        std::vector<Attribute> Attributes;
};