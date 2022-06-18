#pragma once

#include <iostream>
#include <stdexcept>
//#include <bits/stdc++.h>
//#include <map>
#include <unordered_map>
#include "COSNT.hpp"


using namespace std;
namespace ariel {
    class Schedule{
    private:
        unordered_map<string,unordered_map<TableVal, string>> _table;

    public:
//        Schedule(){
//            unordered_map<string,unordered_map<string, string>> _table;
//        }
        unordered_map<TableVal, string>& get_game(const string& str){ return this->_table[str];}
    };
}