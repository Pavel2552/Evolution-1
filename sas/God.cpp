#include "God.h"

#define x_world_size 1920
#define y_world_size 1080

God::God() :
	mWorld(x_world_size, y_world_size)
{}

God::~God() {};

void God::run()
{
	for (long long n = 0, pr = 0;  ; ++n)         // ноиер // прогресс //
	{
		Map q(29, 52);
		Gui y;

		while (true)
		{
			y.draw(q.getPresentation());
			q.makeTurn();
			for (int i = 0; i < 10e7; i++)
			{

			}

			if (q.need_to_evolve())
			{
				q.evolve();
				std::cout << n << ": " << pr << '\n';
				pr = 0;
				++n;
			}
			std::cout << n << ' ' << pr;
		}
	}
}