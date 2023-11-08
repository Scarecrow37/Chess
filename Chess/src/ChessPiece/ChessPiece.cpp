#include "ChessPiece.h"

namespace chess
{
    ChessPiece::ChessPiece(const Location& location) : location_(location)
    {
    }

    ChessPiece::ChessPiece(const ChessPiece& chess_piece) = default;

    ChessPiece::ChessPiece(ChessPiece&& chess_piece) noexcept : location_({})
    {
        location_ = chess_piece.location_;
        chess_piece.location_ = {};
    }


    ChessPiece& ChessPiece::operator=(const ChessPiece& chess_piece) = default;

    ChessPiece& ChessPiece::operator=(ChessPiece&& chess_piece) noexcept
    {
        location_ = chess_piece.location_;
        chess_piece.location_ = {};
        return *this;
    }

    ChessPiece::~ChessPiece() = default;
}
