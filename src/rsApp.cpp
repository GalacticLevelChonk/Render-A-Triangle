#include <GLFW/glfw3.h>
#include <rsApp.hpp>


namespace RS{
    void rsApp::run(){
        while(!rsWindow.shouldClose()){
            glfwPollEvents();
        }
    }
}