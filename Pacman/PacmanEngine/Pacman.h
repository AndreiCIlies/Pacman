#pragma once

#include "IListener.h"
#include "Maze.h"
#include "GameplaySettings.h"
#include "Direction.h"


namespace pac
{
	class Pacman : public IListener
	{
	public:
		Pacman(Position initialPosition, TickType ticksPerMove, TickType powerUpDuration);
		CellType TryMove(Maze& maze);
		Position GetPosition() const;
		void SetPowerUp();
		bool IsPoweredUp() const;
		void Draw(IWindow* window) const;
		void OnEvent(const IEvent* event) override;

	private:
		Position mPosition;
		Direction mDirection;
		Direction mNextDirection;
		TickType mTick;
		TickType mTicksPerMove;
		TickType mLastPowerUpStart;

	private:
		const TickType mPowerUpDuration;
	};
}