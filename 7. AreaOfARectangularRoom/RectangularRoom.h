#pragma once 
#include "Enums.h";

//https://www.youtube.com/watch?v=9RJTQmK0YPI
// begins with # is a preproccessor. Pragma once means only include this once, a header guard. 
class RectangularRoom {
public:
	double LengthOfRoom;
	double WidthOfRoom;
	Measurement Measure;

	RectangularRoom(double length, double width, Measurement measurement);
	

	double GetAreaOfRoom();
	
	
};

