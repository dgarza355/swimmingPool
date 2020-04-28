#pragma once
#include <iostream>
#include <string>

class swimmingPool
{
public:
	swimmingPool();
	~swimmingPool();
	int getLength();
	int setLength(int intpLength);
	int getWidth();
	int setWidth(int intpWidth);
	int getDepth();
	int setDepth(int intpDepth);
	int getRate();
	int setRate(int intpRate);
	int getWater();
	int getDrain();
	int getFill();

	std::string toString();
	

private:
	int intLength;
	int intWidth;
	int intDepth;
	int intRate;
	int intWater;
	int intFill;
	int intDrain;
};

