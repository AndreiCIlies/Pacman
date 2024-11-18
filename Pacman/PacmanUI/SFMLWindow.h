#pragma once

#include "AssetManager.h"
#include "PacmanEngine/Maze.h"
#include "PacmanEngine/IWindow.h"
#include "PacmanEngine/IEvent.h"

#include <memory>
#include <vector>


namespace pac
{
	class SFMLWindow : public IWindow
	{
	public:
		SFMLWindow(sf::RenderWindow& renderWindow, pac::AssetManager&& assetManager);
		void DrawScore(const std::string& score) override;
		void DrawTexture(pac::Position position, pac::Textures texture) override;
		bool IsOpen() const override;
		bool ShouldClose() const override;
		void Clear() const override;
		void Display() override;
		void Close() override;
		std::vector<std::shared_ptr<pac::IEvent>> GetEvents() override;

	private:
		std::shared_ptr<pac::IEvent> ConvertEvent(const sf::Event& event) const;

	private:
		//TODO: Get pointer to IWindow that will give all the details about the position, ...
		sf::RenderWindow& mRenderWindow;
		pac::AssetManager mAssetManager;
		bool mShouldClose = false;
	};
}
