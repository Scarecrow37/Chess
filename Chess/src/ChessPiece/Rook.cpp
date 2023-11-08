#include "Rook.h"

namespace chess
{
    Rook::Rook(const Location& location) : ChessPiece(location)
    {
    }

    bool Rook::CheckPosition(Location to_location)
    {
        return (to_location.column == location_.column && to_location.row != location_.row) || (to_location.column !=
            location_.column && to_location.row == location_.row);
    }
}
