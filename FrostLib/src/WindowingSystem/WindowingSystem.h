#pragma once

#define INTERFACE class

struct FPosition;

INTERFACE IWindow
{
public:
	virtual float get_width() = 0;
	virtual float get_height() = 0;
	virtual const char* get_title() = 0;
	virtual FPosition get_position() = 0;
};

INTERFACE IhasToolbar
{
public:
	virtual bool should_show_title() = 0;
};

struct FPosition
{
	float x;
	float y;
};

class GameWindow : public IWindow, public IhasToolbar
{
public:
	float get_width() {return 1920;}
	float get_height() {return 1080;}
	const char* get_title() {return "My Awesome Window";}
	FPosition get_position()
	{
		FPosition location;
		location.x = 10;
		location.y = -10;

		return location;
	}
	bool should_show_title() {return false;}
};

#undef INTERFACE