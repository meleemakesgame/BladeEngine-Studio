#include <iostream>
#include "../dependencies/headers/settings.hpp"

int main()
{
    std :: cout << "Initializing GLFW" << std :: endl;

    if (!glfwInit())
    {
        std :: cerr << "GLFW Initialization Failure";
        return -1;
    }

    std :: cout << "Initializing GLFW Window and Window Context" << std :: endl;
    glfwWindowHint(GL_MAJOR_VERSION, 3);
    glfwWindowHint(GL_MINOR_VERSION, 3);
    GLFWwindow* window = glfwCreateWindow(DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, WINDOW_NAME, NULL, NULL);
    if (!window)
    {
        std :: cerr << "Window Creation Failed" << std :: endl;
        glfwTerminate();
        return -1;
    }

    std :: cout << "Setting Window Attributes" << std :: endl;
    glfwSetWindowSizeLimits(window, MINIMUM_WINDOW_WIDTH, MINIMUM_WINDOW_HEIGHT, GLFW_DONT_CARE, GLFW_DONT_CARE);
    glfwMakeContextCurrent(window);

    std :: cout << "Starting Window Game Loop" << std :: endl;
    while (!glfwWindowShouldClose(window))
    {
        // Render stuff

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    std :: cout << "Terminating GLFW, closing application";
    return 0;
}