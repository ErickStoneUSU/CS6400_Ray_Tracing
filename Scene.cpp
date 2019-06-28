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
		Item item = new Item();
		item.material = Material();
		scene.items.push_back(item);
		myFile.close();
	}
}



