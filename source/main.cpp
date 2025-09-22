#include <iostream>
#include "../dependencies/headers/settings.hpp"

int main()
{
    std :: cout << "[DEBUG]: Initializing GLFW" << std :: endl;

    if (!glfwInit())
    {
        std :: cerr << "[ERROR]: GLFW Initialization Failure";
        return getErrorFromErrorCode(ErrorCode::GLFWError);
    }

    std :: cout << "[DEBUG]: Initializing GLFW Window and Window Context" << std :: endl;
    glfwWindowHint(GL_MAJOR_VERSION, 3);
    glfwWindowHint(GL_MINOR_VERSION, 3);
    GLFWwindow* window = glfwCreateWindow(DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, WINDOW_NAME, NULL, NULL);
    if (!window)
    {
        std :: cerr << "[ERROR]: Window Creation Failed" << std :: endl;
        glfwTerminate();
        return getErrorFromErrorCode(ErrorCode::WindowError);
    }

    std :: cout << "[DEBUG]: Setting Window Attributes" << std :: endl;
    glfwSetWindowSizeLimits(window, MINIMUM_WINDOW_WIDTH, MINIMUM_WINDOW_HEIGHT, GLFW_DONT_CARE, GLFW_DONT_CARE);
    glfwMakeContextCurrent(window);

    std :: cout << "[DEBUG]: Starting Window Game Loop" << std :: endl;
    while (!glfwWindowShouldClose(window))
    {
        // Render stuff

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    std :: cout << "[DEBUG]: Terminating GLFW, closing application";
    return getErrorFromErrorCode(ErrorCode::Success);
}