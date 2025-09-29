#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Mathematical Constants
// Circles
float PI = 3.14159;
float TAU = PI * 2;
float HALF_PI = PI / 2;

// Golden Ratio
float PHI = 1.61803;

// Errors
enum class ErrorCode : int {
    GLADError = -4,
    GLFWError = -3,
    OpenGLError = -2,
    WindowError = -1,
    Success = 0,
    FileNotFound = 1,
    PermissionDenied = 2
};

int getError(ErrorCode error)
{
    return static_cast<int>(error);
}

// Window Settings
GLFWmonitor* primaryMonitor = glfwGetPrimaryMonitor();
const GLFWvidmode* monitorVideoMode = glfwGetVideoMode(primaryMonitor);

int DEFAULT_WINDOW_WIDTH = 800;
int DEFAULT_WINDOW_HEIGHT = 600;
int MINIMUM_WINDOW_WIDTH = 600;
int MINIMUM_WINDOW_HEIGHT = 450;
const char* WINDOW_NAME = "Blade Engine Studio";