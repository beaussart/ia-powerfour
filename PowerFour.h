//
// Created by beaussan on 21/10/17.
//

#ifndef POWERFOUR_POWERFOUR_H
#define POWERFOUR_POWERFOUR_H

#include "Grid.h"

#define BLUE (-1)
#define RED 1
#define NONE 0
#define HEIGHT 6
#define WIDTH 7

class PowerFour {
    Grid grid_;
    int checkColumn();
    int checkLines();
    int checkDiagonals();

public:
    PowerFour();
    ~PowerFour();

    int get(size_t c, size_t l);

    bool play(int player, int column);

    bool isColumnFull(size_t column);

    bool isGameTie();

    void print();

    int checkIfWin();

    int score(int player, PowerFour grille);


};

#endif //POWERFOUR_POWERFOUR_H
