#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace RS{
    struct rsWindow{
        rsWindow(int windwWidth, int windowHeight, std::string windowName);
        ~rsWindow();

        rsWindow(const rsWindow &) = delete;
        rsWindow &operator=(const rsWindow &) = delete;

        bool shouldClose(){return glfwWindowShouldClose(window);}

        private:
            void initWindow();

            const int width = 1000;
            const int height = 800;
            const std::string name;

            GLFWwindow *window;
    };
}