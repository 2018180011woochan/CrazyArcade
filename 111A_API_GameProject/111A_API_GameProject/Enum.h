#pragma once
#ifndef __ENUM_H__
#define __ENUM_H__

namespace OBJID
{
	enum ID {PLAYER, BOMB, BOSSBOMB, BOMBWAVE, TILE, BLOCK, MONSTER, BOSS, END};
}

namespace OBJDIR
{
	enum DIR { IDLE, TOP, BOTTOM, LEFT, RIGHT, TOPEND, BOTTOMEND, LEFTEND, RIGHTEND, END };
}

namespace OBJSTATE
{
	enum STATE { IDLE, WALK, BUBBLE, POP, ATTACK, HIT, DEAD, END };
}

namespace CHARNAME
{
	enum NAME { BAZZI, DAO, DIGENIE, UNI, END };
}

namespace MAPBLOCK
{
	enum BLOCK { NOBLOCK, MONSTER, 
		BASKET, LEAF1, LEAF2, FLOWER,
		GRASS, BUSH, ROCK1, ROCK2, ROCK3, STONESTATUE, BOMB, END
	};
}

namespace GAMEITEM
{
	enum ITEM {BALLON, POTION, MAXPOTION, SKATE, END};
}

#endif // !__ENUM_H__
