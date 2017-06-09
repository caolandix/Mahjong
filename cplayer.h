#ifndef CPLAYER_H
#define CPLAYER_H

#include <QObject>

class CPlayer {
public:
    CPlayer();

    enum { NORTH = 0, SOUTH, EAST, WEST } SeatType;
protected:
    SeatType m_Seat;
    bool m_bTempEastPlayer;
};

#endif // CPLAYER_H
