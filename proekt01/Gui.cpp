#include <SFML/Graphics.hpp>
#include "Gui.h"





void Gui::draw(std::vector<std::vector<Object::ObjectType>> result)
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");     ///  ����
    sf::CircleShape Crc1;

    int x = 0, y = 0, k = 0;


    Crc1.setRadius(30);                                 ///  ������
    Crc1.setPointCount(6);                              ///  �������
    Crc1.setOutlineColor(sf::Color(70, 70, 70));        ///  ���� ��    /* ���� */
    Crc1.setOutlineThickness(5);                        ///  ������� ������� 
    Crc1.setFillColor(sf::Color(120, 120, 120));        ///  ���� ������

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[0].size(); j++)
            {
                if (result[i][j] == Object::ObjectType::VOID)
                    Crc1.setFillColor(sf::Color(120, 120, 120));    //  �����

                if (result[i][j] == Object::ObjectType::BOT)        // ���
                    Crc1.setFillColor(sf::Color(70, 120, 20));  

                if (result[i][j] == Object::ObjectType::FOOD)       // ���
                    Crc1.setFillColor(sf::Color(30, 160, 20));

                if (result[i][j] == Object::ObjectType::POISON)     // ��
                    Crc1.setFillColor(sf::Color(130, 30, 20));

                if (result[i][j] == Object::ObjectType::WALL)       // �����
                    Crc1.setFillColor(sf::Color(70, 70, 70));

                if (result[i][j] == Object::ObjectType::NUN)       // 0
                    Crc1.setFillColor(sf::Color(0, 0, 0));

                if (i % 2 == 1)
                    x = j * 59 + 30;

                if (i % 2 == 0)
                    x = j * 59;

                Crc1.setPosition(x, y);
                window.draw(Crc1);
            }
            y = i * 50;
        }
        window.display();
    }

};

Gui::Gui() {};
Gui::~Gui() {};