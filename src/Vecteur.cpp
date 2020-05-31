#include "Vecteur.h"
#include <cmath>

void Vecteur::operator+=(Vecteur const& autre) {
    x += autre.x;
    y += autre.y;
}

void Vecteur::operator-=(Vecteur const& autre) {
    x -= autre.x;
    y -= autre.y;
}

Vecteur Vecteur::operator*(float coefficient) const {
    return {x*coefficient, y*coefficient};
}

Vecteur Vecteur::creerDepuisAngle(float taille, float angleEnDegre) {
    return {taille*cos(angleEnDegre/180.f*static_cast<float>(M_PI)), taille*sin(angleEnDegre/180.f*M_PI)};
}
