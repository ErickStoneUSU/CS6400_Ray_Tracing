#include "main.h"
#include <iostream>
#include "Rectangle.cpp"
#include "example.cpp"
using namespace std;



int main() {
	// populate the details of the model
	// use pointers so that the details do not get copied
	string filepath = "Models/ArmadilloBack_0.ply";
	const std::shared_ptr<PlyData> vertices, normals, faces, texcoords;
	Plyer plyer = Plyer();
	plyer.read_ply(filepath, vertices, normals, faces, texcoords);
	
	Rectangle rec;
	cout << rec.a;
	cin.get();
	return 0;
}

