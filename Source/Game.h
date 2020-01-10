#pragma once

#include <GameDev2D.h>
#include "Timer.h"
#include "Constants.h"

namespace GameDev2D
{
	//Class definition
	class Game
	{
	public:
		Game();  //Constructor

		//Write game logic in the Update method
		void Update(double delta);

		//Render game objects in the Draw method
		void Draw();

		//Input methods
		void HandleLeftMouseClick(float mouseX, float mouseY);
		void HandleRightMouseClick(float mouseX, float mouseY);
		void HandleMouseMove(float mouseX, float mouseY, float previousX, float previousY);
		void HandleKeyPress(Keyboard::Key key);
		void HandleKeyReleased(Keyboard::Key key);
		


	private:
		//Member variables GO HERE 
		SpriteFont m_Label;

		Timer m_CountdownTimer;
		Timer m_ColorChangeTimer;
		Timer m_FadeOutTimer;

        Audio m_MarcusHappy[MARCUS_HAPPY];
        Audio m_MarcusAngry[MARCUS_ANGRY];

        Vector2 position;
        Sprite m_HUD[HUD_NUM];
	};
}
