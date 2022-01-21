#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 1100), "SFML works!");     ///  поле
    sf::CircleShape Crc1;
    sf::CircleShape Crc2;
    sf::CircleShape Crc3;

    int x = 0, y = 0, k = 0;
    int map[10][10];
    int eda[10][10];

        Crc1.setRadius(60);                                                    ///  радиус
        Crc1.setPointCount(6);                                                 ///  граница
        Crc1.setOutlineColor(sf::Color(70, 70, 70));                           ///  цвет гр           /* поле */
        Crc1.setOutlineThickness(5);                                           ///  толщина границы 
        Crc1.setFillColor(sf::Color(120,120,120));                             ///  цвет внутри
    
        Crc2.setRadius(20);                                                    ///  радиус
        Crc2.setPointCount(60);                                                ///  граница           /* еда */
        Crc2.setFillColor(sf::Color(30, 160, 20));                             ///  цвет внутри

        Crc3.setRadius(40);                                                    ///  радиус
        Crc3.setPointCount(4);                                                 ///  граница           /* враг */
        Crc3.setFillColor(sf::Color(130, 30, 20));                             ///  цвет внутри
        
        srand(time(NULL));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; ++j)
            {
                map[i][j] = rand() % 100;
            }
        }

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++)
                {
                    if ((map[i][j] / 10) % 2 == 1)
                    {
                        x = (map[i][j] % 10) * 114 + 57;
                    }
                    else
                    {
                        x = (map[i][j] % 10) * 114;
                    }
                    y = (map[i][j] / 10) * 98;
                    Crc1.setPosition(x, y);
                    Crc2.setPosition(x + 40, y + 40);
                    Crc3.setPosition(x + 40, y + 40);
                    window.draw(Crc1);
                    window.draw(Crc2);
                    window.draw(Crc3);
                }
               
            }
            window.display();
            
        }
    
    return 0;
}



       