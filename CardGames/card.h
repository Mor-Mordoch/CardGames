#pragma once
class Card
{
public:
	Card(int value, bool is_available = true);
	virtual int  GetValue()    = 0;
	virtual bool IsAvailable() = 0;
	virtual void PrintCard()   = 0;
protected:
	int  value_;
	bool is_available_;
};

