#pragma once

#include "../headers/gameobject.hpp"
#include "../headers/shader.hpp"
#include "../headers/mesh.hpp"

class Plane : GameObject
{
    public:
        std::vector<Vertex> VertexArray = {
            Vertex(Vector3(1 * Scale.X, 1 * Scale.Y, 0), Vector3(), RGB(), Vector2(1, 1)), Vertex(Vector3(-1 * Scale.X, 1 * Scale.Y, 0), Vector3(), RGB(), Vector2(-1, 1)),
            Vertex(Vector3(1 * Scale.X, -1 * Scale.Y, 0), Vector3(), RGB(), Vector2(1, -1)), Vertex(Vector3(-1 * Scale.X, -1 * Scale.Y, 0), Vector3(), RGB(), Vector2(-1, -1))
        };

        std::vector<unsigned int> IndexArray = {
            0, 1, 3,
            1, 2, 3
        };

        Vector3 NormalVector;

        Plane(Vector3 newPosition, Vector3 newRotation, Vector3 Scalar);
};

class Cube : GameObject
{
    public:
        std::vector<Vertex> VertexArray = {
            Vertex(), Vertex(), // +X, +Y
            Vertex(), Vertex(), // +X, -Y
            Vertex(), Vertex(), // -X, +Y
            Vertex(), Vertex()  // -X, -Y
        };

        Cube(Vector3 newPosition, Vector3 newRotation, Vector3 Scalar);
};