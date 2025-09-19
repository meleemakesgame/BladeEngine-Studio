#pragma once

#include "../headers/gameobject.hpp"
#include "../headers/color.hpp"

class Vertex
{
    public:
        Vector3 Position;
        Vector3 Normal;
        RGB Color;
        Vector2 TextureCoordinate;

        Vertex();
        Vertex(Vector3 newPosition, Vector3 newNormal, RGB newColor, Vector2 textureCoordinate);
};

class Plane : GameObject
{
    public:
        std::vector<Vertex> VertexArray = {
            Vertex(Vector3(1 * Scale.X, 1 * Scale.Y, 0), Vector3(), RGB(), Vector2(1, 1)), Vertex(Vector3(-1 * Scale.X, 1 * Scale.Y, 0), Vector3(), RGB(), Vector2(-1, 1)),
            Vertex(Vector3(1 * Scale.X, -1 * Scale.Y, 0), Vector3(), RGB(), Vector2(1, -1)), Vertex(Vector3(-1 * Scale.X, -1 * Scale.Y, 0), Vector3(), RGB(), Vector2(-1, -1))
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