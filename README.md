# Pacman
![image](https://github.com/user-attachments/assets/99177ab3-59dd-49ea-8861-194251cc5aa6)

## Description

I worked on this project with 3 classmates at the university. Together, we recreated the classic Pacman experience, focusing on simplicity and precision. The goal is simple: navigate through the maze, avoid the ghosts, collect all the coins and power-ups, and win the game! One wrong move, and it’s game over!

Note that we didn't include the traditional 3 lives for Pacman in this version. The game also features sounds to enhance the experience. Enjoy and have fun!

## Technologies Used

* C++.
* SFML Graphics Library.
* GTest.

## My Contributions

* Pacman Class: Designed to manage Pacman's behavior and interactions within the maze, including movement, coins, and power-up mechanics.
* Maze Class: Designed to represent the structure and functionality of the game maze, including cell types, dimensions, and interactions with Pacman.
* Game Over Scenario: When Pacman collides with the ghost without powerup, the player loses.
* Win Scenario: When Pacman gets all the coins and powerups, the player wins.
* Unit Tests for Pacman and Maze: Ensured that Pacman and Maze functionalities work seamlessly.

## Installation and Usage

**1. Clone the repository**  
git clone https://github.com/AndreiCIlies/Pacman.git

**2. Open the project in Visual Studio**  
Navigate to the folder where you cloned the repository and open the .sln file (Pacman -> Pacman.sln).

**3. Install SFML**  
Check https://www.sfml-dev.org/tutorials/2.6/start-vc.php.

**4. Set the startup project**  
Set PacmanUI as startup project.

**5. Build the project**  
Click Build in the top menu, then select Build Solution (or press Ctrl+Shift+B).

**6. Run the game**  
Click the green Start button (or press F5) to run the game.

**7. Controls**  
Use the arrows or AWSD keys to navigate Pacman through the maze.
