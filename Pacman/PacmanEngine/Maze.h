#pragma once

#include <vector>
#include <string>
#include <memory>
#include "Position.h"
#include "Dimensions.h"
#include "IWindow.h"


namespace pac
{
	enum class CellType : uint8_t
	{
		Empty,
		Wall,
		Coin,
		PowerUp,
		GhostSpawn,
		PacmanSpawn
	};

	class Maze
	{
	public:
		Maze();
		void InitCells(std::vector<std::vector<CellType>>&& cells);
		CellType GetCellType(Position pos) const;
		void EatCell(Position pos);
		Position GetGhostSpawnPosition() const;
		Position GetPacmanSpawnPosition() const;
		Dimensions GetDimensions() const;
		void ReadMazeFromFile(std::string_view filename);
		void DrawMaze(std::shared_ptr<pac::IWindow> window) const;

	private:
		std::vector<std::vector<CellType>> mCells;
		Position mGhostSpawn;
		Position mPacmanSpawn;
	};
}