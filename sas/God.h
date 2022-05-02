#ifndef GOD_H
#define GOD_H

#include "Gui.h"
#include "Map.h"

class God
{
public:
	God();
	~God();

	
	
	void run();
private:
	Map q;
	Gui y;
	
	bool pause = false;

};

#endif // GOD_H




