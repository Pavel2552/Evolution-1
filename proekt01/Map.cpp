#include "Map.h"

const int bot = 10;

Map::Map() :
	mField(20, std::vector<Object*>(32, NULL))
{
	for (int i = 0; i < mField.size(); ++i)
	{
		for (int j = 0; j < mField[0].size(); ++j)
		{
			mField[i][j] = new Object(Object::ObjectType::VOID);
		}
	}

	for (int i = 0; i < mField.size(); ++i)
	{
		mField[i][0] = new Object(Object::ObjectType::WALL);        // ����
		mField[i][31] = new Object(Object::ObjectType::WALL);       // �����
	}
	for (int j = 0; j < mField[0].size(); ++j)
	{
		mField[0][j] = new Object(Object::ObjectType::WALL);        //���
		mField[1][j] = new Object(Object::ObjectType::WALL);        //����
	}
		
	srand(time(NULL));
	for (int i = 2; i < mField.size(); i++) {
		for (int j = 1; j < mField[0].size()-1; ++j)
		{
			
			if (rand() % 20 == 5)
			{
				mField[i][j] = new Object(Object::ObjectType::FOOD);
			}
		}
	}
}

std::vector<std::vector<Object::ObjectType>> Map::getPresentation()
{
	std::vector<std::vector<Object::ObjectType>>
	  result(mField.size(), std::vector<Object::ObjectType>
			(mField[0].size(), Object::ObjectType::NUN));

	for (int i = 0; i < mField.size(); ++i)
	{
		for (int j = 0; j < mField[0].size(); ++j)
		{
			result[i][j] = mField[i][j]->getType();
		}
	}

	return result;
}

Map::~Map() {};


