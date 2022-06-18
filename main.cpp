#include <iostream>
# include "source/Team.hpp"
# include "source/Game.hpp"
# include "source/Leauge.hpp"
# include "source/Schedule.hpp"
# include "source/COSNT.hpp"
using namespace std;
using namespace ariel;

int main() {
    Schedule s;
    Leauge l;
    Team a("a", 0.2);

    for (auto t : l.get_teams()){
        for (auto t1 : l.get_teams()){
            Game g{t, t1, s};
            g.play();
            string key = t.get_name() + '-' + t1.get_name();
            std::cout << g << std::endl;
        }
    }
    string key = l.get_teams().at(0).get_name() + '-' +  l.get_teams().at(4).get_name();
    string key2 = l.get_teams().at(4).get_name() + '-' +  l.get_teams().at(0).get_name();
    std::cout << s.get_game(key)[TableVal::WIN] << std::endl;
    std::cout << s.get_game(key)[TableVal::HOME] << std::endl;
    std::cout << s.get_game(key)[TableVal::SCORE] << std::endl;
    std::cout << s.get_game(key2)[TableVal::WIN] << std::endl;
    std::cout << s.get_game(key2)[TableVal::HOME] << std::endl;
    std::cout << s.get_game(key2)[TableVal::SCORE] << std::endl;




    Team b("b", 1);
    Game g(a, b, s);
    g.play();
    std::cout << s.get_game("a-b")[TableVal::SCORE] << std::endl;

    return 0;
}
