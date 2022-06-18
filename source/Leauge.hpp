#pragma once



#include <iostream>
#include <stdexcept>
#include <vector>
#include <time.h>

#include "Game.hpp"
using namespace std;

namespace ariel{
    class Leauge{
    private:
        vector<Team> _teams;

    public:
        Leauge();
        Leauge(const vector<Team>& teams);
        vector<Team>& get_teams(){return this->_teams;};

        static string random_string(size_t length);
    };
}
