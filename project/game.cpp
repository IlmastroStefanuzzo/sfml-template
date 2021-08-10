#include "game.h"

/* Constructor */
game::game()
{
    this->initVariables();
    this->initWindow();
}
/* Destructor */
game::~game()
{
    delete this->window;
}


/* Private functions */
void game::initVariables()
{
    this->window = nullptr;
}

void game::initWindow()
{
    this->window = new sf::RenderWindow(sf::VideoMode(1080, 720), "Bob's Village", sf::Style::Close | sf::Style::Titlebar);
}

/* Accessors (so public functions) */
const bool game::getWindowIsOpen() const
{
    return this->window->isOpen();
}

/* Public functions */
void game::pollEvents() // Event polling
{
    while (window->pollEvent(ev))
    {
        switch (ev.type) {
        case sf::Event::Closed: window->close(); break;
        case sf::Event::KeyPressed: if (ev.key.code == sf::Keyboard::Escape) window->close(); break;
        }
    }
}

void game::update() // Update
{
    this->pollEvents();
}

void game::render() // Render
{
    window->clear(sf::Color(212, 255, 191)); // Clear frame
    window->display(); // Tell app window is done drawing
}

