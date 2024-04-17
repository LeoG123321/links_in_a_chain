#pragma once
#include <string>
using namespace std;
class ChainLink
{
private:
    string color;
public:
    ChainLink(string color) {
        this->color = color;
    }

    string get_color() {
        return this->color;
    }
};

