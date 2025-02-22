#include <rsWindow.hpp>

namespace RS{
    rsWindow::rsWindow(int windwWidth, int windowHeight, std::string windowName) 
        : width(windwWidth), height(windowHeight), name(windowName){
            initWindow();
        }

    rsWindow::~rsWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void rsWindow::initWindow(){
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    
        window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
    }

}