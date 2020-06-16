#ifndef VAISSEAU_H_INCLUDED
#define VAISSEAU_H_INCLUDED
#include <SFML/Graphics.hpp>


class Vaisseau
{
    public:

    //Vaisseau();
    //~Vaisseau();
    //void avancer();
    void haut();
    void bas();
    void gauche();
    void droite();
    void afficher(sf::RenderWindow &fenetre);

    private:

    sf::CircleShape cercle{30};

};



#endif // VAISSEAU_H_INCLUDED
