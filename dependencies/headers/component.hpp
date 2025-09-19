#pragma once

#include <vector>
#include <iostream>

#include "../headers/attribute.hpp"
#include "../headers/shader.hpp"
#include "../headers/mesh.hpp"

class Component
{
    public:
        std::string ComponentName;
        std::vector<Attribute> Attributes;

        Component();
        Component(const char* componentName, std::vector<Attribute> attributeList);
};