#pragma once

#include <iostream>
#include <stdexcept>
#include <random>
#include "Team.hpp"
#include "Schedule.hpp"

using namespace std;

namespace ariel{
    class Game{
    private:
        Team* _a;
        Team* _b;
        std::random_device rd{};
        std::mt19937 generator{rd()};
//        default_random_engine generator;
        normal_distribution<double> distribution{65, 17};
        Schedule* _table;
        string key;

    public:
        Game(Team& a, Team& b, Schedule& s){
            this->_a = &a;
            this->_b = &b;
            this->_table = &s;
            this->key.clear();
//            std::cout << "Game:\n" << this->_a << std::endl<<this->_b<<endl<<"__END"<<endl;
        };
        Team& get_a(){return *this->_a;}
        Team& get_b(){return *this->_b;}
        void play();
        friend ostream& operator<<(ostream& out, Game& g);
    };
}