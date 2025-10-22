#include <iostream>
#include "../dependencies/headers/settings.hpp"
#include "../dependencies/headers/file_manager.hpp"
#include "../dependencies/headers/primatives.hpp"

int main()
{
    std :: cout << "[DEBUG]: Initializing GLFW" << std :: endl;

    if (!glfwInit())
    {
        std :: cerr << "[ERROR]: GLFW Initialization Failure";
        return getError(ErrorCode::GLFWError);
    }

    std :: cout << "[DEBUG]: Initializing GLFW Window and Window Context" << std :: endl;
    glfwWindowHint(GL_MAJOR_VERSION, 3);
    glfwWindowHint(GL_MINOR_VERSION, 3);
    GLFWwindow* window = glfwCreateWindow(DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, WINDOW_NAME, NULL, NULL);
    if (!window || window == NULL)
    {
        std :: cerr << "[ERROR]: Window Creation Failed" << std :: endl;
        glfwTerminate();
        return getError(ErrorCode::WindowError);
    }

    std :: cout << "[DEBUG]: Setting Window Attributes" << std :: endl;
    glfwSetWindowSizeLimits(window, MINIMUM_WINDOW_WIDTH, MINIMUM_WINDOW_HEIGHT, GLFW_DONT_CARE, GLFW_DONT_CARE);
    glfwMakeContextCurrent(window);

    std :: cout << "[DEBUG]: Loading GLAD OpenGL Library" << std :: endl;
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "[ERROR]: Failed to Load GLAD OpenGL Library" << std::endl;
        glfwTerminate();
        return getError(ErrorCode::GLADError);
    }

    std :: cout << "[DEBUG]: Starting Window Game Loop" << std :: endl;
    while (!glfwWindowShouldClose(window))
    {
        // Initialize Objects
        Plane plane(Vector3(), Vector3(), Vector3(1, 1, 1));

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    // Destroy all objects
    

    glfwDestroyWindow(window);
    glfwTerminate();
    std :: cout << "[DEBUG]: Terminating GLFW, closing application";
    return getError(ErrorCode::Success);
}