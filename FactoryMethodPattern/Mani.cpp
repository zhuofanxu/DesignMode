#include"BlackHuman.h"
#include"HumanFactory.h"
#include"WhiteHuman.h"
#include"YellowHuman.h"
#include<iostream>
int main()
{
	Human*  whiteHuman=0;
	Human*  blackHuman=0;
	Human*  yellowHuman=0;
	/*������������Ϊ���˹������ģ�������ȡ�����ò�ͬ����������*/
	HumanFactory<WhiteHuman> whitehumanFactory;
	HumanFactory<BlackHuman> blackhumanFactory;
	HumanFactory<BlackHuman> yellowhumanFactory;

	whiteHuman=whitehumanFactory.createHuman();
	whiteHuman->talk();
	if(whiteHuman)
	delete whiteHuman;
	blackHuman=blackhumanFactory.createHuman();
	blackHuman->cry();
	if(blackHuman)
		delete blackHuman;
	yellowHuman=yellowhumanFactory.createHuman();
	yellowHuman->smile();
	if(yellowHuman)
		delete yellowHuman;
	system("pause");
	
}