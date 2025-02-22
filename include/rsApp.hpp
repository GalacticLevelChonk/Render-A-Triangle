#pragma once

#include <rsWindow.hpp>

namespace RS{
    struct rsApp{
        public:

            static constexpr int WINDOW_WIDTH = 1000;
            static constexpr int WINDOW_HEIGHT = 800;

            void run();

        private:
            rsWindow rsWindow{WINDOW_WIDTH, WINDOW_HEIGHT, "Vulkan Window"};
    };
}