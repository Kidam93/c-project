#include <iostream>
#include <SFML/Graphics.hpp>
#include "vaisseau.h"

using namespace std;

int main()
{
    sf::RenderWindow fenetre(sf::VideoMode(800, 600), "Asteroide");
    auto cercle = sf::CircleShape{100};
    cercle.setFillColor(sf::Color{100,80,130});
    auto vaisseau = Vaisseau{};
    while(fenetre.isOpen())
    {
        auto evenement = sf::Event{};
        while(fenetre.pollEvent(evenement))
        {
            if(evenement.type == sf::Event::Closed)
            {
                fenetre.close();
            }
            if(evenement.type == sf::Event::KeyPressed)
            {
                if(sf::Keyboard::Up)
                {
                    vaisseau.haut
                }
                if(sf::Keyboard::Down)
                {
                    vaisseau.bas
                }
                if(sf::Keyboard::Left)
                {
                    vaisseau.gauche
                }
                if(sf::Keyboard::Right)
                {
                    vaisseau.droit
                }
            }
         //sf::Keyboard::isKeyPressed
         //sf::Event::KeyPressed
           /*if (evenement.type == sf::Event::KeyPressed)
            {
                switch (evenement.key.code)
                {
                case sf::Keyboard::Up :
                   vaisseau.haut();
                break;

                case sf::Keyboard::Down:
                    vaisseau.bas();
                break;

                case sf::Keyboard::Left:
                    vaisseau.gauche();
                break;

                case sf::Keyboard::Right:
                    vaisseau.droite();
                break;

                default :
                break;
                }
            }*/
        }
        fenetre.clear();
        fenetre.draw(cercle);
        vaisseau.afficher(fenetre);
        fenetre.display();
}
    return 0;
}
