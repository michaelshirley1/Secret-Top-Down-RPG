
#include "core/baseIncludes.h"
#include "scenes/game.h"
#include "entities/character/character.h"

Game::Game(sf::RenderWindow& window)
{
    player = std::make_unique<character>(0, 0, 0, 0);
    objects.push_back(std::move(player));
}

void Game::baseProcesses() {

}

void Game::inputLoop(float dt) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {

    }
}

void Game::update(float dt)
{
    for (auto& obj : objects)
        obj->update(dt);
}

void Game::render(sf::RenderWindow *renderWindow)
{
    for (auto& obj : objects)
    {
        obj->render(renderWindow);
    }
}