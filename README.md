# Advanced Tic Tac Toe

## Overview
This project demonstrates an Advanced Tic Tac Toe game using C++, Qt for GUI, and SQLite for Database. The game has a database for a unique user login and 2 modes of play, Player VS Player or Player VS Ai. The Player VS Ai has 3 difficulty modes: Easy, Medium, and Hard.
  
## Key Features
- **Secure and unique user login functionality:**
  - Passwords are hashed for enhanced security.
  - Each username must be unique, preventing duplicate accounts.
  - Both username and password must be at least 4 characters long.
- **Two gameplay modes:**
  - Player vs. Player.
  - Player vs. AI.
- **Three levels of AI difficulty:**
  - Easy: AI makes random moves.
  - Medium: AI prioritizes winning, blocking opponent’s winning moves, or makes random moves.
  - Hard: AI uses the Minimax algorithm for optimal gameplay (Impossible to beat 🙃).
- **Game history page:**
  - View previous games with details such as board states using do and undo moves.
  - Track total matches played, won, lost, and drawn.
- **Continuous Integration pipeline:**
  - With each push an automated test runs using googletests to verify that the logic of the game wasn't changed.

## Setup and Installation
- Install Qt Creator (make sure to verify that mingw is installed when installing Qt).
- Clone this repository: 
  ```bash
  git clone https://github.com/mo2menwael/Advanced-Tic-Tac-Toe.git
  ```
- Build the project using Qt.
- Search for Advanced-Tic-Tac-Toe.exe in your project folder, you are gonna find it in build folder, either in debug or release folder.
- Search in your windows search bar for Qt "your Qt version" (MinGW "your MinGW version" 64-bit) and open it and type those comands:
  ```
  cd the path where you find Advanced-Tic-Tac-Toe.exe
  windeployqt.exe --quick .
  ```
- Run the game from the Advanced-Tic-Tac-Toe.exe and Enjoy 😁.
