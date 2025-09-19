#pragma once

#include "../headers/primatives.hpp"

class Mesh
{
    public:
        std::vector<Vertex> VertexArray;    // Individual vertices (Vertex(Vector3 Position, Vector3 Normal, RGB VertexColor))
        std::vector<unsigned int> IndexArray;
    private:
        unsigned int VAO, VBO, EBO;

        void setupMesh();
};