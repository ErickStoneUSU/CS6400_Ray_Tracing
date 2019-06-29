#include "Scene.h"
using namespace std;



int main() {
	SceneDetails sceneDetails;
	Scene scene = Scene();
	//scene.getDetails("", sceneDetails);
	//scene.loadScene(sceneDetails, scene);
	scene.render(100, 100);
	
	return 0;
}