#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Mathematical Constants
// Circles
float PI = 3.14159;
float TAU = PI * 2;

// Miscellaneous
float GOLDEN_RATIO = 1.61803;

// Window Settings
GLFWmonitor* primaryMonitor = glfwGetPrimaryMonitor();
const GLFWvidmode* monitorVideoMode = glfwGetVideoMode(primaryMonitor);

int DEFAULT_WINDOW_WIDTH = 800;
int DEFAULT_WINDOW_HEIGHT = 600;
int MINIMUM_WINDOW_WIDTH = 600;
int MINIMUM_WINDOW_HEIGHT = 450;
const char* WINDOW_NAME = "Blade Engine Studio";