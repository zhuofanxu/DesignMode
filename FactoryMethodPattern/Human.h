#pragma once
/*人类的基类 是具体人种的接口*/

class Human
{
public:
	Human(void);
	~Human(void);
	virtual void talk(){}      //人大多数是可以说话的
	virtual void smile(){}    //人都是可以微笑的
	virtual void cry(){}     //人都是会哭的
};

