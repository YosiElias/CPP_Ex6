#include "Game.hpp"

using namespace std;
namespace ariel{

    void Game::play() {


        this->key = this->_a->get_name() + '-' + this->_b->get_name();
        int a_score;
        do {
            a_score = this->distribution(this->generator);
        } while (a_score > 100 || a_score < 0);
        int b_score;
        do {
            b_score = this->distribution(this->generator);
        } while (b_score > 100 || b_score < 0);
        a_score += 10 * this->_a->get_grade();
        b_score += 10 * this->_b->get_grade();
        if (a_score > b_score)
            this->_table->get_game(key)[TableVal::WIN] = this->_a->get_name();
        else
            this->_table->get_game(key)[TableVal::WIN] = this->_b->get_name();
        this->_table->get_game(key)[TableVal::HOME] = this->_a->get_name();
        string score = to_string(a_score) + '-' + to_string(b_score);
        this->_table->get_game(key)[TableVal::SCORE] = score;



    }

    ostream &operator<<(ostream &out, Game &g) {
        if (g.key.empty())
            throw string("wasn't game");
        out << "-- Game result: --\n";
        out << "Winner: " << g._table->get_game(g.key)[TableVal::WIN]<<"\n";
        out << "Score: " << g._table->get_game(g.key)[TableVal::SCORE]<<"\n";
        out << "Home: " << g._table->get_game(g.key)[TableVal::HOME]<<"\n";
        return out;
    }
}