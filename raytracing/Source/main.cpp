#include "main.h"
#include <iostream>
#include "Rectangle.cpp"
#include "example.cpp"
using namespace std;



int main() {
	// populate the details of the model
	// use pointers so that the details do not get copied
	string filepath = "C:\\Users\\erick\\Projects\\School\\CS6400_Ray_Tracing\\raytracing\\Source\\Models\\drill\\data\\drill_1.6mm_0_cyb.ply";
	Plyer plyer = Plyer();
	std::shared_ptr<PlyData> vertices, normals, faces, texcoords;
	plyer.read_ply(filepath, vertices, normals, faces, texcoords);


	vertices.use_count();
	Rectangle rec;
	cout << rec.a;
	cin.get();
	return 0;
}


// code snippets

// getting polygon
// 	string filepath = "C:\\Users\\erick\\Projects\\School\\CS6400_Ray_Tracing\\raytracing\\Source\\Models\\drill\\data\\drill_1.6mm_0_cyb.ply";
//  Plyer plyer = Plyer();
//  std::shared_ptr<PlyData> vertices, normals, faces, texcoords;
//  plyer.read_ply(filepath, vertices, normals, faces, texcoords);
//


