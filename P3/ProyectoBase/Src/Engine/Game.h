#pragma once
#include <string>
#include <map>

class Scene;
class Loader;

class Game
{
	private:
		// Save <scene name, scene file>
		std::map<std::string, std::string> scenesQueue;
		Scene* scene = nullptr;

		bool exit = false;
		bool end = false;
		bool win = false;

	public:
		Game();
		~Game();

		// initialise OgreSDL
		void initContext();
		// initialise the game
		void init(std::string _firstScene);
		
		// loop of the game
		void run();
		// update the game
		void update();
		// render the entities of the game
		void render();
		// handle the input of the game
		void handleInput();
		
		// change the current scene
		void setScene(std::string _sceneName);
};
