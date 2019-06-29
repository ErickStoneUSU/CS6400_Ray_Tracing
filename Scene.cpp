#include "Scene.h"
#include <list>
#include <fstream>
#include "Material.h"

using namespace std;

SceneDetails Scene::getDetails(string detailFile, SceneDetails& details) {
	ifstream myFile(detailFile);
	string line;
	int step = 0;
	SceneDetails details;
	while (myFile >> line) {
		if (line == "ItemFiles:") { step = 1; }
		else if (line == "LightFiles") { step = 2; }
		else if (line == "CameraFiles") { step = 3; }

		if (step = 1) { details.itemFiles.push_back(line); }
		else if (step = 2) { details.lightFiles.push_back(line); }
		else if (step = 3) { details.cameraFile = line; }
	}

	myFile.close();
}

// format:
  // material
  // starting location
  // vectors
  
void Scene::loadScene(SceneDetails details, Scene & scene) {
	// load and append each of the items, lights, and the camera from the files
	for (const auto& d : details.itemFiles) {
		ifstream myFile(d);
		string line;
		SceneDetails details;
		myFile >> line; // material of object
		//Item item = new Item();
		//item.material = Material();
		//scene.items.push_back(item);
		myFile.close();
	}
}

// todo parallelize this to work across all cores
// todo consider gpu instead??
void Scene::render(int xDim, int yDim) {
	// iterate over all of the pixels of the film
	for (int y = 0; y < yDim; ++y) {
		for (int x = 0; x < xDim; ++x) {
			// get the ray from the focal point to the x,y pixel of film
			// get the radiance

			// sample -> camera -> ray -> li() -> randiance -> sample, radiance -> film

			// li? confusing from the writing

			// sample random points on each of the objects
			// take the needed steps to get the pixel at that time.
			// loop over the objects and see if the bounding boxes are a hit
			// see if the bounding box is in range of any of the lights
			// if the bounding box hits a light, then check if the triangles on the bounding box are a hit
			// if so, then check if the triangle is in contact with any of the lights

		}
	}
}



