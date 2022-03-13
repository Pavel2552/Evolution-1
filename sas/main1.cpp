#include "Gui.h";
#include "Map.h";

int main()
{
	//sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	Map q(19, 32);
	Gui y;
	while (true)
	{
		y.draw(q.getPresentation());
		q.makeTurn();
		for (int i = 0; i < 10e7; i++)
		{

		}
	}

}