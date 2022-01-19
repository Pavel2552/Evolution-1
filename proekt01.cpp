﻿#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1100, 900), "SFML works!");     ///  поле
    sf::CircleShape Crc1;

    int x = 0, y = 0;

        Crc1.setRadius(60);                                                    ///  радиус
        Crc1.setPointCount(6);                                                 ///  грани
        Crc1.setOutlineColor(sf::Color(128, 0, 128));                          ///  граница
        Crc1.setOutlineThickness(5);                                           ///  толщина границы 
        Crc1.setFillColor(sf::Color(175, 238, 238));                           ///  цвет внутри
    

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 9; j++)
                {
                    if (i % 2 == 0)
                    {
                        x = j * 114+ 57;
                    }
                    else
                    {
                        x = j * 114;
                    }
                   // x = j * 114;
                    Crc1.setPosition(x, y  + 10);
                    window.draw(Crc1);
                }
                y = i * 98;
       
            }

            window.display();
        }
    
    return 0;
}



       