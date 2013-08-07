#pragma once
#ifndef _HumanFactory_h_
#define _HumanFactory_h_
#include"Human.h"
/*使用模板，具体的人种类作为模板参数，可以避免实现不同人种的工厂类*/
template<typename T>
class HumanFactory
{
public:
	HumanFactory(void){}
	~HumanFactory(void){}
	inline virtual Human* createHuman(){return new T;}

};
#endif   //_HumanFactory_h_

