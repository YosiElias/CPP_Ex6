# include "source/Team.hpp"
# include "source/Game.hpp"
# include "source/Leauge.hpp"
# include "source/Schedule.hpp"
# include "source/COSNT.hpp"
#include <string>
#include <algorithm>

using namespace ariel;

using namespace std;


TEST_CASE("random input") {

Schedule s;
Leauge l;
Team a("a", 0.2);

for (auto t : l.get_teams()){
for (auto t1 : l.get_teams()){
Game g{t, t1, s};
g.play();
string key = t.get_name() + '-' + t1.get_name();
CHECK_THROW(std::cout << g << std::endl;)
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

}
TEST_CASE("Bad input - Page not written") {
Schedule s;

CHECK_THROWS (s.get_game("a-1"));
