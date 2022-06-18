#include <algorithm>
#include "Leauge.hpp"

using namespace std;
namespace ariel{
    Leauge::Leauge() {
        srand( (unsigned)time( NULL ) );
        for (size_t i=0; i<20; i++){
            this->_teams.push_back(Team(random_string(3), (float) rand()/RAND_MAX));
        }
    }

    std::string Leauge::random_string( size_t length )
    {
        auto randchar = []() -> char
        {
            const char charset[] =
                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            const size_t max_index = (sizeof(charset) - 1);
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        std::generate_n( str.begin(), length, randchar );
        return str;
    }

    Leauge::Leauge(const vector<Team> &teams) {
        for (auto t : teams){
            this->_teams.push_back(t);
        }
    }
}