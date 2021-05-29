#pragma once

#include "Scene.h"

class SceneGame : public Scene {
	public:
		SceneGame();
		~SceneGame();

		virtual void preLoad();
		virtual void unLoad(); //Liberar memoria sin borrar el puntero

	protected:
		virtual void init();
		virtual void enterScene();

		virtual void updateBegin();
		virtual void update();
		virtual void updateEnd();

		virtual void renderBegin();
		virtual void render();
		virtual void renderEnd();

		virtual void renderGUI();

	private:
		C_Rectangle rect1;
		C_Rectangle rect2;

		int sprite_id;
		C_Rectangle sprite_rect;

		std::vector<std::vector<bool>> mpCollisionMap;
		int mpMapW, mpMapH;

		//de prueba para probar
		int sprite_frame;
		int sprite_frame_time;

};
