# JTile

A top-down RPG built in C++ with SFML. Currently under construction.

## Features

- Tile-based game world
- Playable character with health, rolling/dodge mechanics, and damage handling
- State-based scene management
- Delta-time game loop

## Requirements

- CMake 3.28+
- C++17 compiler
- SFML is fetched automatically via CMake FetchContent

## Build

```bash
cmake -B build -S .
cmake --build build
```

The executable is output to `build/bin/main` (or `main.exe` on Windows).

On Windows, `openal32.dll` is copied automatically for SFML audio support.

## Project Structure

```
src/
  core/         # Game loop, state machine, utilities
  entities/     # Base object and character classes
  scenes/       # Game, menu, and title scenes
assets/         # Sprites and other assets
```
