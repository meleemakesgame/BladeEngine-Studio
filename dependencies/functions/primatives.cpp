#include "../headers/primatives.hpp"

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

    Attribute mesh;
    Shader planeShader("../../shaders/basic.vert", "../../shaders/basic.frag");
    Mesh planeMesh(VertexArray, IndexArray, planeShader);
    mesh.Name = "Mesh";
    mesh.Value = planeMesh;

    planeComponents.push_back(MeshRenderer);

    Components = planeComponents;
}