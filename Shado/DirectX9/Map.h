#pragma once

class Map
{
private:

public:

	Map();
	~Map();

	int stageMapT1[10][10] =
	{	 					//10	
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,1,1,1,1,1,1,1,1,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,1,1,1,1,1,1,1,1,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0 },
	};

	void DrawMap(int x , int y , int Pixel , int playerX , int playerY);


};

