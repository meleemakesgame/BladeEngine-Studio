#pragma once

#include <iostream>

// Debugging
void print(const char* message)
{
    std :: cout << "[BLADE_ENGINE::DEBUG]: " << message << std::endl;
}

void warn(const char* message)
{
    std :: cout << "[BLADE_ENGINE::WARNING]: " << message << std::endl;
}

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

// helper functions
int getError(ErrorCode error)
{
    return static_cast<int>(error);
}

const char* errorCodeToString(ErrorCode errorCode)
{
    switch (errorCode) {
        case ErrorCode::GLADError: return "GLAD Error";
        case ErrorCode::GLFWError: return "GLFW Error";
        case ErrorCode::OpenGLError: return "OpenGL Error";
        case ErrorCode::WindowError: return "Window Error";
        case ErrorCode::Success: return "Success";
        case ErrorCode::FileNotFound: return "File Not Found";
        case ErrorCode::PermissionDenied: return "Permission Denied";
        default: return "Unknown";
    }
}


void error(const char* message, ErrorCode errorCode)
{
    std :: cout << "[BLADE_ENGINE::ERROR::" << errorCodeToString(errorCode) <<"]: " << message << std::endl;
}