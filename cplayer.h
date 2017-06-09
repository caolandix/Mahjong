#ifndef CPLAYER_H
#define CPLAYER_H

#include <QObject>

class CPlayer {
public:
    CPlayer();
    CPlayer(const CPlayer &);
    ~CPlayer() {}

    typedef enum { NORTH = 0, SOUTH, EAST, WEST } SeatType;

    SeatType Seat() const { return m_Seat; }
    void Seat(const SeatType seat) { m_Seat = seat; }

    bool isTempEast() const { return m_bTempEastPlayer; }
    void tempEast(const bool b) { m_bTempEastPlayer = b; }
protected:
    SeatType m_Seat;
    bool m_bTempEastPlayer;
};

#endif // CPLAYER_H
