#include "../headers/vector.hpp"
#include "../headers/color.hpp"

// Individual Buttons, Frames, Textboxes, etc..
class UserInterfaceElement
{
    public:
        int Z_Index = 0;
        const char* Name = "UI Element";
};

// Container for multiple UserInterfaceElements
class UserInteraceWidget
{
    public:
        const char* Name = "Widget";
        Vector2 Size = Vector2();
};