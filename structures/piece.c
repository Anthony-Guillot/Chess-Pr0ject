enum piece_types {ROOK, KNIGHT, BISHOP, QUEEN, KING, PAWN};
enum colors {BLACK, WHITE};

typedef struct piece {
    piece_types type;
    colors color;
    int x;
    int y;
} piece;
