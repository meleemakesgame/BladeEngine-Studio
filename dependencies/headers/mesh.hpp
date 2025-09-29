#pragma once

#include "../headers/shader.hpp"
#include "../headers/vector.hpp"
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

class Mesh
{
    public:
        std::vector<Vertex> VertexArray;        // Individual vertices (Vertex(Vector3 Position, Vector3 Normal, RGB VertexColor))
        std::vector<unsigned int> IndexArray;   // Vertex IDs
        Shader shader;
    private:
        GLuint VAO, VBO, EBO;

        void setupMesh();
        void deleteMesh();
};