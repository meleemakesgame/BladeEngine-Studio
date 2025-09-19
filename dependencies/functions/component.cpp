#include "../headers/component.hpp"

Component::Component()
{
    Component::ComponentName = "NewComponent";
}

Component::Component(const char* componentName, std::vector<Attribute> attributeList)
{
    Component::ComponentName = componentName;

    Component::Attributes = attributeList;
}