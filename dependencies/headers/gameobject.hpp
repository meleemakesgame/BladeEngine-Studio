#include "../headers/vector.hpp"
#include "../headers/component.hpp"

class GameObject
{
    public:
        Vector3 Position;
        Vector3 Rotation;
        Vector3 Scale;

        std::vector<std::string> Tags;
        std::vector<Component> Components;
};