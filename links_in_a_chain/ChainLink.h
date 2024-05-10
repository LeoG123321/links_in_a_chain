#pragma once
#include <string>
using namespace std;
class ChainLink
{
private:
    string color;
public:
    ChainLink(string color);
    ChainLink();
    string get_color();
};

