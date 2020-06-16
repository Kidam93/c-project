#include "vaisseau.h"


/*void Vaisseau::avancer()
{
    cercle.move(10, 0);
}*/
void Vaisseau::haut()
{
    cercle.move(0, -10);
}
void Vaisseau::bas()
{
    cercle.move(0, 10);
}
void Vaisseau::gauche()
{
    cercle.move(-10, 0);
}
void Vaisseau::droite()
{
    cercle.move(10, 0);
}

void Vaisseau::afficher(sf::RenderWindow &fenetre)
{
    fenetre.draw(cercle);
}
