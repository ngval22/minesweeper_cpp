#pragma once

enum class CellState {
    Hidden,
    Revealed,
    Flagged,
};

struct Cell {
    bool hasMine = false;
    CellState state = CellState::Hidden;
    // TODO: more to come probably
};

