#pragma once

#include <vector>
#include <iostream>

#include "../headers/attribute.hpp"
#include "../headers/shader.hpp"
#include "../headers/mesh.hpp"
#include "../headers/material.hpp"

enum BaseComponentType {
    None,
    MeshRenderer,
    MeshCollider,
    Material
};

class Component
{
    public:
        std::string ComponentName;
        std::vector<Attribute> Attributes;
        BaseComponentType componentType;

        Component();
        Component(const char* componentName, std::vector<Attribute> attributeList);
};