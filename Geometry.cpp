#include "Geometry.h"
#include "Point.h"
#include "BoundingBox.h"
#include <list> 
using namespace std;

class Geometry {
	Point locale;
	list<Point> vertices;
	BoundingBox box;
};