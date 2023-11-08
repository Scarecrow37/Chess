#pragma once
#include "ChessPiece.h"

namespace chess
{
    class Rook final : public ChessPiece
    {
    public:
        explicit Rook(const Location& location);
        explicit Rook(const ChessPiece& chess_piece);
        explicit Rook(ChessPiece&& chess_piece);
        Rook& operator=(const Rook& rook);
        Rook& operator=(Rook&& rook);
        ~Rook() override = default;
        bool CheckPosition(Location to_location) override;
    };
}
