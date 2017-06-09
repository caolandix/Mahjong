#ifndef CTILE_H
#define CTILE_H

#include <QObject>

#include "commondefs.hpp"

class CTile {
public:

    // ctor, cpy ctor, dtor
    CTile();
    CTile(CTile *);
    ~CTile();

    CTile *clone() const;

    enum {TILE_Bamboo = 0, TILE_Character, TILE_Dot, TILE_Wind, TILE_Dragon, TILE_Flower, TILE_Season } TileType;


    // Accessor methods
    TileType Type() const { return m_Type; }
    void Type(TileType tt) { m_Type = tt; }
    string Name() const { return m_Name; }
    void Name(string Name) const { m_Name = Name; }

protected:
    TileType m_Type;
    string m_Name;
};

#endif // CTILE_H
