#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Shader
{
    public:
        GLuint ID;

        const char* vertexShaderPath;
        const char* fragmentShaderPath;

        Shader(const char* vertexShaderPath, const char* fragmentShaderPath);

        void compile();

        void use();

        void setBool(const std::string &name, bool value) const;
        void setInt(const std::string &name, int value) const;
        void setFloat(const std::string &name, float value) const;
    private:
        void checkCompilerErrors(GLuint shader, std::string type);
};