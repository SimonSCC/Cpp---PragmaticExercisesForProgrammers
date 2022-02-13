#include "RectangularRoom.h";

//Worked it out: https://stackoverflow.com/questions/9579930/separating-class-code-into-a-header-and-cpp-file

RectangularRoom::RectangularRoom(double length, double width, Measurement measurement)
{
	LengthOfRoom = length;
	WidthOfRoom = width;
	Measure = measurement;
}

double RectangularRoom::GetAreaOfRoom()
{
	double feetResult = LengthOfRoom * WidthOfRoom;
	if (Measure == Measurement::Meter)
	{
		return feetResult;
	}
	else if (Measure == Measurement::Feet)
	{
		return feetResult * 0.09290304;
	}
}



