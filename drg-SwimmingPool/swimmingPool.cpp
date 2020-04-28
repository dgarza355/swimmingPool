#include "swimmingPool.h"

swimmingPool::swimmingPool()
{
	setLength(20);
	setWidth(40);
	setDepth(6);
	setRate(8);
	   
}
swimmingPool::~swimmingPool()
{

this->intLength = 0;
this->intWidth = 0;
this->intDepth = 0;
this->intRate = 0;
}

int swimmingPool::getLength()
{
	return this->intLength;
}
int swimmingPool::setLength(int intpLength)
{

	this->intLength = intpLength;
	return getLength();
}
int swimmingPool::getWidth()
{
	return this->intWidth;
}
int swimmingPool::setWidth(int intpWidth)
{
	
	this->intWidth = intpWidth;
	return getWidth();
}
int swimmingPool::getDepth()
{
	return this->intDepth;
}

int swimmingPool::setDepth(int intpDepth)
{

	this->intDepth = intpDepth;
	return getDepth();
} 
int swimmingPool::getRate()
{
return this->intRate;
}
int swimmingPool::setRate(int intpRate)
{
	this->intRate = intpRate;
	return getRate();
}

int swimmingPool::getWater()
{
	return (this->getLength() * this->getWidth() * this->getDepth() * this->getRate());
}
int swimmingPool::getFill()
{
	return ((this->getWater() / this->getRate()) / 60); //With a standard garden hose
}
 
int swimmingPool::getDrain()
{
	return ((this->getWater() / (this->getRate() + 4)) / 60); //With a standard drain pump
}


std::string swimmingPool::toString()
{
	std::string strReturnValue = "";
	strReturnValue += "\nLength: " + std::to_string(this->getLength()) + "ft";
	strReturnValue += "\nWidth: " + std::to_string(this->getWidth()) + "ft";
	strReturnValue += "\nDepth: " + std::to_string(this->getDepth()) + "ft";
	strReturnValue += "\nGallons Per Minute: " + std::to_string(this->getRate()) + " ";
	strReturnValue += "\nTotal Gallons: " + std::to_string(this->getWater()) + " ";
	strReturnValue += "\nHours to Fill: " + std::to_string(this->getFill()) + " ";
	strReturnValue += "\nHours to Drain: " + std::to_string(this->getDrain()) + " ";
	return strReturnValue;
}
