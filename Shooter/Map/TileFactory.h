// Michael Schrandt
//
// Tile factory, for creating specified tile.
// One copy of each tile is created at runtime, any request for a tile
//	returns a reference to an existing tile (flyweight pattern).

#pragma once

#include "EnumTile.h"
#include "Tile.h"
#include "SFML/Graphics.hpp"

const float UPDATE_TIME = .5;

class TileFactory
{
public:
	TileFactory();
	~TileFactory();
	Tile* getTile(EnumTile);
	void update();

private:
	float time;
	sf::Texture tileSheet;
	sf::Sprite** sprites;
	Tile* tiles;
};