#include "../headers/gameobject.hpp"

GameObject::GameObject()
{
    Position = Rotation = Scale = Vector3();
}

GameObject::GameObject(Vector3 newPosition, Vector3 newRotation, Vector3 Scalar, std::vector<Component> componentList)
{
    Position = newPosition;
    Rotation = newRotation;
    Scale = Scalar;

    Components = componentList;
}