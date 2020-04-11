#pragma once
#include <map>
#include <string>

class Scene;
class Loader;
class GUI;

class Game {
  private:
    // Save <scene name, scene file>
    std::map<std::string, std::string> scenesQueue;
    Scene* scene = nullptr;

    bool exit = false;
    bool end = false;
    bool win = false;

    std::string sceneToChange;
    bool sceneChange = false;
    bool deleteAll = false;

    GUI* m_gui;

  public:
    Game();
    ~Game();

    // initialise OgreSDL
    void initContext();

    // initialise the game
    bool init(std::string _firstScene);
    // loop of the game
    void run();
    // update the game
    void update();
    // render the entities of the game
    void render();
    // handle the input of the game
    void handleInput();

    // tells if the scene is going to be change
    void setChangeScene(bool _change, std::string _sceneName, bool _deleteAll);
    // change the current scene
    void setScene(std::string _sceneName);
};
