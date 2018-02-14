#include <iostream>
#include"Engine\Engine.h"
#include "Engine\Graphics\Sprite.h"

using namespace std;


int main()
{
	cout << "Hello World" << endl;
	Engine engine;
	engine.Initialize("Flappy Stallion");

	Sprite testSprite = Sprite("Assets/Art/Horse.png", 100, 100);


	while (true)
	{
		engine.Update();
		testSprite.Update();
		

		engine.BeginRender();
		testSprite.Render();
		engine.EndRender();
	}

	return 0;
}