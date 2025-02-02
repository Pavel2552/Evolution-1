#ifndef GUI_H
#define GUI_H

#include <SFML/Graphics.hpp>

#include <vector>;
#include "Object.h";
#include "sas.hpp"

class Gui
{

public:
	//Gui(sf::RenderWindow& aWindow);
	Gui(int x, int y);
	~Gui();
	void draw(std::vector<std::vector<Object::ObjectType>> result,WorldSize* w);
private:
	
	sf::RenderWindow mWindow;
	sf::Text mText;
};


#endif // !GUI_H


