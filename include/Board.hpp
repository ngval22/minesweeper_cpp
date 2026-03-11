#pragma once

#include "Cell.hpp"
#include <array>

class Board {
    public:
        static const int ROWS = 9;
        static const int COLUMNS = 9;

        bool reveal(int row, int col);      // false if mine, a.k.a. loss
        void flag(int row, int col);
        void placeMine(int safeRow, int safeCol);
        bool checkWin() const;
        void reset();

        const Cell& getCell(int row, int col) const;
        // TODO: probably many more
    private:
        std::array<std::array<Cell, COLUMNS>, ROWS> board{};
        // TODO: private functions
};
