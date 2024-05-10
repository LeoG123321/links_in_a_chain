#include "ChainLink.h"

ChainLink::ChainLink(string color) {
    this->color = color;
}

ChainLink::ChainLink() {
    return;
}

string ChainLink::get_color() {
    return this->color;
}