#ifndef MAP_H
#define MAP_H


#include <cstdlib>
#include <ctime>
#include <vector>
#include <queue>
#include <set>


#include"object.h"
#include"Bot.h"
#include "Domain.h"

class Map
{
public:
	Map(int x_world_size, int y_world_size);
	~Map();

	std::queue<Pair<int>> bots;
	std::vector<std::vector<Object::ObjectType>> getPresentation();

	void makeTurn();
	
private:

	int mFoodtCounter;
	int mPoisonCounter;

	Bot::ActionType answer_for_bot(Object::ObjectType);
	std::vector<std::vector<Object*>> mField;

	void reloadBotsCoordinates();
	std::queue<Pair<int>> mBotsCoord;

	void clearBotsMemory(char aValue = 0);
	std::deque<Bot*> mOldBots;

	Pair<int> findVoid();
	void setNewObject       (Object::ObjectType aType, Pair<int> aCoord);
	void setExictingObject  (Object* aObjectPtr, Pair<int> aCoord);
	void createObjects      (int aLim, Object::ObjectType aType);
	void regenerate();
};

#endif // !MAP_H           