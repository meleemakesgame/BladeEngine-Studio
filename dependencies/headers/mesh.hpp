#pragma once

#include "../headers/primatives.hpp"
#include "../headers/shader.hpp"

class Mesh
{
    public:
        std::vector<Vertex> VertexArray;        // Individual vertices (Vertex(Vector3 Position, Vector3 Normal, RGB VertexColor))
        std::vector<unsigned int> IndexArray;   // Vertex IDs
    private:
        GLuint* VAO, VBO, EBO;

        void setupMesh();
};