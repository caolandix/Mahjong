#include "ctile.h"

CTile::CTile() {
}

CTile::CTile(const CTile &Obj) {
    m_Type = Obj.Type();
    m_Name = Obj.Name();
}

CTile *CTile::clone() const {
    return new CTile(*this);
}

CTile &CTile::operator=(const CTile &Obj) {
    if (this != &Obj) {
        m_Type = Obj.Type();
        m_Name = Obj.Name();
    }
    return *this;
}


CTile::~CTile() {

}
