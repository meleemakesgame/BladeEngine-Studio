#include <iostream>
#include "../dependencies/headers/settings.hpp"
#include "../dependencies/headers/debug.hpp"
#include "../dependencies/headers/file_manager.hpp"

int main()
{
    print("Initializing GLFW");

    if (!glfwInit())
    {
        error("GLFW Initialization Failure", ErrorCode::GLFWError);
        return getError(ErrorCode::GLFWError);
    }

    print("Initializing GLFW Window and Window Context");
    glfwWindowHint(GL_MAJOR_VERSION, 3);
    glfwWindowHint(GL_MINOR_VERSION, 3);
    GLFWwindow* window = glfwCreateWindow(DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, WINDOW_NAME, NULL, NULL);
    if (!window || window == NULL)
    {
        error("Window Creation Failed", ErrorCode::WindowError);
        glfwTerminate();
        return getError(ErrorCode::WindowError);
    }

    print("Setting Window Attributes");
    glfwSetWindowSizeLimits(window, MINIMUM_WINDOW_WIDTH, MINIMUM_WINDOW_HEIGHT, GLFW_DONT_CARE, GLFW_DONT_CARE);
    glfwMakeContextCurrent(window);

    print("Loading GLAD OpenGL Library");
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        error("Failed to Load GLAD OpenGL Library", ErrorCode::GLADError);
        glfwTerminate();
        return getError(ErrorCode::GLADError);
    }

    print("Starting Window Game Loop");
    while (!glfwWindowShouldClose(window))
    {
        // Initialize Objects

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    // Destroy all objects

    glfwDestroyWindow(window);
    glfwTerminate();
    print("Terminating GLFW, closing application");
    return getError(ErrorCode::Success);
}