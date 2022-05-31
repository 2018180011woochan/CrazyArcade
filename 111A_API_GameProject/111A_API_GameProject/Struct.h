#pragma once
#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct tagInfo
{
	float		fX;
	float		fY;
	int			iCX;
	int			iCY;

	int			iHP;

	int			iBombPower;
	int			iMaxBomb;

	float		fSpeed;
	bool		bisDead;
}INFO;

typedef struct tagLinePos
{
	tagLinePos() { ZeroMemory(this, sizeof(tagLinePos)); }
	tagLinePos(float _x, float _y) : fX(_x), fY(_y) {}

	float		fX;
	float		fY;
}LINEPOS;

typedef struct tagLineInfo
{
	tagLineInfo() { ZeroMemory(this, sizeof(tagLineInfo)); }
	tagLineInfo(LINEPOS& _tLeft, LINEPOS& _tRight) : tLeftPos(_tLeft), tRightPos(_tRight) {}

	LINEPOS tLeftPos;
	LINEPOS tRightPos;
}LINEINFO;

typedef struct tagFrame
{
	int		iFrameStart;
	int		iFrameEnd;
	int		iFrameScene;
	DWORD	dwFrameTime;
	DWORD	dwFrameSpeed;
}FRAME;
#endif // !__STRUCT_H__
