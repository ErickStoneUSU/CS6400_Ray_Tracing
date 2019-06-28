#pragma once
#include "Light.h"
#include "Camera.h"
#include "Item.h"
#include "SceneDetails.h"
#include <list> 
#include <string>
using namespace std;

class Scene {
public:
	list<Item> items;
	list<Light> lights;
	Camera camera;
	
public:
	SceneDetails getDetails(string detailFile, SceneDetails& details);
	void loadScene(SceneDetails details, Scene& scene);
};

