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
    ChainLink() {
        return;
    }
    string get_color() {
        return this->color;
    }
};

