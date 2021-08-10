#pragma once
#include <SFML/Graphics.hpp>

/*
    Class that acts as the game engine
*/
class game {

public:
    game(); // Constructor
    virtual ~game(); // Destructor

private: // Functions
    void initVariables();
    void initWindow();

public: // Accessors
    const bool getWindowIsOpen() const;

public: // Functions
    void pollEvents();
    void update();
    void render();

private: // Variables
    sf::RenderWindow* window;
    sf::Event ev;
};

