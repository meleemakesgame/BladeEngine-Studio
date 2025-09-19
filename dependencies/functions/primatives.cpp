#include "../headers/primatives.hpp"

Vertex::Vertex()
{
    Position = Normal = Vector3();
    Color = RGB();
    TextureCoordinate = Vector2();
}

Vertex::Vertex(Vector3 newPosition, Vector3 newNormal, RGB newColor, Vector2 textureCoordinate)
{
    Position = newNormal;
    Normal = newNormal;
    Color = newColor;
    TextureCoordinate = textureCoordinate;
}

Plane::Plane(Vector3 newPosition, Vector3 newRotation, Vector3 Scalar)
{
    Position = newPosition;
    Rotation = newRotation;
    Scale = Scalar;

    std::vector<Component> planeComponents;
    Component MeshRenderer;
    MeshRenderer.ComponentName = "Mesh Renderer";
    Attribute enabled;
    enabled.Name = "Enabled";
    enabled.Value = true;
    Mesh planeMesh;
    planeMesh.VertexArray = VertexArray;
    Attribute mesh;
    mesh.Name = "Mesh";
    mesh.Value = planeMesh;

    planeComponents.push_back(MeshRenderer);

    Components = planeComponents;
}