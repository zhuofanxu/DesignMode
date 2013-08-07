#pragma once
#include "human.h"

class YellowHuman :
	public Human
{
public:
	YellowHuman(void);
	~YellowHuman(void);
	void talk();
	void smile();
	void cry();
};

