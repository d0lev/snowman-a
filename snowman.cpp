#include <iostream>
#include "snowman.hpp"
#include <string>
using namespace std;

namespace ariel {
   
    string snowman(int str) {
        while (str) {
            int digit = str %10;
            if (digit < 1 || digit > 4) {
            throw invalid_argument("Invaild input");
            }
            else str = str / 10;
        }
        if(str < 11111111 || str > 44444444) {
            throw invalid_argument("Invaild input");
        }

        return "  ___  \n (_*_) \n (o.-) \n (> <) \n (\" \") ";

    }
}
