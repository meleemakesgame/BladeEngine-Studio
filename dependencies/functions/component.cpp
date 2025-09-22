#include "../headers/component.hpp"

Component::Component()
{
    Component::ComponentName = "NewComponent";
    Component::componentType = None;
}

Component::Component(const char* componentName, std::vector<Attribute> attributeList)
{
    Component::ComponentName = componentName;

    if (Component::componentType != None or Component::componentType != NULL)
    {
        if (Component::componentType == MeshRenderer)
        {
            std::vector<Attribute> meshRendererBaseAttributes;

            Attribute enabled;
            enabled.Name = "Enabled";
            enabled.Value = true;

            Mesh baseMesh;
            Attribute mesh;
            mesh.Name = "Mesh";
            mesh.Value = baseMesh;

            meshRendererBaseAttributes.push_back(enabled);
            meshRendererBaseAttributes.push_back(mesh);
        }
        else if (Component::componentType == MeshCollider)
        {
            std::vector<Attribute> meshColliderBaseAttributes;

            Attribute enabled;
            enabled.Name = "Enabled";
            enabled.Value = true;

            Mesh baseMesh;
            Attribute mesh;
            mesh.Name = "Mesh";
            mesh.Value = baseMesh;

            meshColliderBaseAttributes.push_back(enabled);
            meshColliderBaseAttributes.push_back(mesh);
        }
    }
    else if (Component::componentType == None or Component::componentType == NULL)
    {
        Component::Attributes = attributeList;
    }
    else
    {
        std::cerr << "[WARNING]: Invalid BaseComponentType, assigning 'attributeList'" << std::endl;
        Component::Attributes = attributeList;
    }
}