#include "Game.h"
#include "Constants.h"
#include "Timer.h"



namespace GameDev2D
{
	Game::Game() :
		//Initialize member variables
		m_Label("OpenSans-CondBold_32"),
		m_CountdownTimer(COUNTDOWN_DURATION),
		m_ColorChangeTimer(COLOR_CHANGE_INTERVAL),
        m_FadeOutTimer(FADE_OUT_DURATION),
        m_MarcusHappy{ "Marcus_Happy_001", "Marcus_Happy_002","Marcus_Happy_003" },
        m_MarcusAngry{ "Marcus_Angry_001", "Marcus_Angry_002", "Marcus_Angry_003" },
        m_HUD{"HUD_BulletEmpty", "HUD_BulletFull", "HUD_Lancer", "HUD_ReloadBar", "HUD_ReloadNeedle"}
	{
         
	}

	void Game::Update(double delta)
	{
        std::string output = std::to_string(delta);
        m_Label.SetText(output);

        
	}

	void Game::Draw()
	{
        m_HUD[2].Draw();
        
        m_Label.Draw();
	}

	void Game::HandleLeftMouseClick(float mouseX, float mouseY)
	{
		
	}

	void Game::HandleRightMouseClick(float mouseX, float mouseY)
	{

	}

	void Game::HandleMouseMove(float mouseX, float mouseY, float previousX, float previousY)
	{
		
	}

	void Game::HandleKeyPress(Keyboard::Key key)
	{
  
	}

	void Game::HandleKeyReleased(Keyboard::Key key)
	{

	}

	
}