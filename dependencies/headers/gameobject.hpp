#pragma once

#include "../headers/vector.hpp"
#include "../headers/component.hpp"

class GameObject
{
    public:
        Vector3 Position = Vector3();
        Vector3 Rotation = Vector3();
        Vector3 Scale = Vector3();

        // Components
        std::vector<Component> Components;

        GameObject() = delete;
        GameObject(Vector3 newPosition, Vector3 newRotation, Vector3 Scalar, std::vector<Component> componentList) = delete;
};