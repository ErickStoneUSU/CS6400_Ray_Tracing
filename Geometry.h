#pragma once
class Geometry
{
	Point locale;
	list<Point> vertices;
	BoundingBox box;
	// get the closest and furthest points
	float getDistanceForCloseness(Point filmPixelLocation, float m, float b);
};

