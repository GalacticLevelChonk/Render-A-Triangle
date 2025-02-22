#include <rsApp.hpp>

#include <cstdlib>
#include <iostream>

int main(){
    RS::rsApp app{};

    try{
        app.run();
    } catch(const std::exception &e){
        std::cerr << e.what() << "\n";
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}