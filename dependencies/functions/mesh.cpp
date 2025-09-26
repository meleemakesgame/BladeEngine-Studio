#include "../headers/mesh.hpp"

void Mesh::setupMesh()
{
    // VBO
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(VertexArray), static_cast<const void*>(&VertexArray), GL_STATIC_DRAW);

    // EBO
    glGenBuffers(1, &EBO);
    glBindBuffer(GL_ARRAY_BUFFER, EBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(IndexArray), static_cast<const void*>(&IndexArray), GL_STATIC_DRAW);
}