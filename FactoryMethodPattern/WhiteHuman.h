#pragma once
#include "human.h"

class WhiteHuman :
	public Human
{
public:
	WhiteHuman(void);
	~WhiteHuman(void);
	void talk();
	void smile();
	void cry();
};

