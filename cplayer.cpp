#include "cplayer.h"

CPlayer::CPlayer() {

}

CPlayer::CPlayer(const CPlayer &obj) {
    m_Seat = obj.Seat();
    m_bTempEastPlayer = obj.isTempEast();
}
