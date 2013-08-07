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
	/*具体人种类作为造人工厂类的模板参数，取代了用不同工厂来造人*/
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