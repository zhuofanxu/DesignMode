#pragma once
#ifndef _HumanFactory_h_
#define _HumanFactory_h_
#include"Human.h"
/*ʹ��ģ�壬�������������Ϊģ����������Ա���ʵ�ֲ�ͬ���ֵĹ�����*/
template<typename T>
class HumanFactory
{
public:
	HumanFactory(void){}
	~HumanFactory(void){}
	inline virtual Human* createHuman(){return new T;}

};
#endif   //_HumanFactory_h_

