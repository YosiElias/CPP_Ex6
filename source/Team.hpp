#pragma once

#include <iostream>
#include <stdexcept>
using namespace std;
namespace ariel {
    class Team{
        private:
            string _name;
            double _grade;
    public:
        Team(string name, double grade) :_name(name), _grade(grade){
//            std::cout << &_grade << std::endl;
        };
        string& get_name(){return this->_name;}
        void set_name(string str){this->_name = str;}
        double& get_grade(){return this->_grade;}
    };

}