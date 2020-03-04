#pragma once

#include <string>

class SDL_Window;
class SGTechniqueResolverListener;

namespace Ogre
{
	class RenderWindow;
	class Root;
	class Viewport;
	class SceneManager;
	class SceneNode;

	typedef std::string _StringBase;
	typedef _StringBase String;
}

struct NativeWindowPair
{
	Ogre::RenderWindow* render = nullptr;
	SDL_Window* native = nullptr;
};

class OgreSDLContext
{
	private:
		static OgreSDLContext* _instance;

		Ogre::Root* mRoot = nullptr;
		Ogre::String mResourcesCfg;
		Ogre::String mPluginsCfg;
		Ogre::Viewport* vp = nullptr;

		Ogre::SceneManager* mSM = nullptr;

		NativeWindowPair mWindow;

		Ogre::SceneNode* mCam = nullptr;
		Ogre::SceneNode* mLight = nullptr;

		Ogre::String mRTShaderLibPath;
		Ogre::RTShader::ShaderGenerator* mShaderGenerator; // The Shader generator instance.
		SGTechniqueResolverListener* mMaterialMgrListener; // Shader generator material manager listener.

		bool grab = false, showCursor = true;

		bool exit = false;

	public:
		static OgreSDLContext* getInstance();

		OgreSDLContext();
		void erase();

		// initialize the application
		void initApp(std::string appName);
		// create mRoot and initialize the strings mResourcesCfg and mPluginsCfg according to the configuration
		void createRoot();
		// lets Ogre know where to look for the resources
		void settingResources();
		// create the render window
		void createWindow(std::string appName);
		// keep (or not) the mouse inside the window
		void setWindowGrab(bool _grab, bool _showCursor);
		// initialize the RT Shader system.
		void initialiseRTShaderSystem();

		// close the application
		void closeApp();
		// cleans up and shuts down the context.
		void shutdown();
		// destroy the RT Shader system.
		void destroyRTShaderSystem();

		// process all window events since last call
		void pollEvents();

		// Return a pointer to the SceneManager
		Ogre::SceneManager* getSceneManager();

		Ogre::RenderWindow* getRenderWindow();


		//------------------------- ESTO NO ESTARA AQUI
		bool renderLoop();
};