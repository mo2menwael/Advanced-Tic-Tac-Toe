# Advanced Tic Tac Toe

## Overview
This project demonstrates an Advanced Tic Tac Toe game using C++, Qt for GUI, and SQLite for Database. The game has a database for unique user login and 2 modes of play, Player vs. Player or Player vs. AI. The Player VS Ai has 3 difficulty modes: Easy, Medium, and Hard.

![](https://github.com/mo2menwael/Advanced-Tic-Tac-Toe/blob/main/game.gif)
  
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
  - Medium: AI prioritizes winning, blocking opponent’s winning moves, or making random moves.
  - Hard: AI uses Minimax algorithm for optimal gameplay (Impossible to Beat 🙃).
- **Game history page:**
  - View previous games with details such as board states using do and undo moves.
  - Track total matches played, won, lost, and drawn.
- **Continuous Integration pipeline:**
  - With each push an automated test runs using Google Test to verify that the game logic wasn't changed.

## Setup and Installation
- Install Qt Creator (make sure that MinGW is installed when installing Qt).
- Clone this repository: 
  ```bash
  git clone https://github.com/mo2menwael/Advanced-Tic-Tac-Toe.git
  ```
- Build the project using Qt.
- Search for Advanced-Tic-Tac-Toe.exe in your project folder, you are gonna find it in build folder, either in debug or release folder.
- Search in your Windows search bar for Qt "your Qt version" (MinGW "your MinGW version" 64-bit) and open it and type these commands:
  ```
  cd the path where you find Advanced-Tic-Tac-Toe.exe
  windeployqt.exe --quick .
  ```
- Run the game from Advanced-Tic-Tac-Toe.exe and Enjoy 😁.

## Setup Google Tests
**Note:** Only follow this steps if you want to run the tests on your PC.
- Make sure that you have installed CMake and MinGW on your PC (if not, please install them).
- Clone this repository (if you haven't already cloned it): 
  ```bash
  git clone https://github.com/mo2menwael/Advanced-Tic-Tac-Toe.git
  ```
- In googletest folder, create a folder called "build".
- Open PowerShell and type these commands:
  ```
  cd the path where you created build folder
  cmake -G "MinGW Makefiles" ..
  make
  ```
- Open Qt Creator and open "Advanced-Tic-Tac-Toe.pro" file and remove the hashtag signs '#' commenting code lines only.
- Build & Run the project using Qt.

## Enough Coding, Let's Play ✖️⭕!
- Just open ".exe game files" folder and open Advanced-Tic-Tac-Toe.exe and Enjoy 😁.
