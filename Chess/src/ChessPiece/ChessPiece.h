#pragma once
#include "../Location.h"

namespace chess
{
    class ChessPiece
    {
    protected:
        Location location_;
    public:
        explicit ChessPiece(const Location& location);
        explicit ChessPiece(const ChessPiece& chess_piece);
        explicit ChessPiece(ChessPiece&& chess_piece) noexcept;
        ChessPiece& operator=(const ChessPiece& chess_piece);
        ChessPiece& operator=(ChessPiece&& chess_piece) noexcept;
        virtual ~ChessPiece();
        virtual bool CheckPosition(Location to_location) = 0;
    };
}
