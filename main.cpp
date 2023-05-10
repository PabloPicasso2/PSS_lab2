#include <iostream>
#include "arx/arx.hpp"

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
    auto arx = ARX({1.0, 0.5}, {-0.5}, 1, 0);
    arx.save("config.csv");

    std::cin.get();
}
