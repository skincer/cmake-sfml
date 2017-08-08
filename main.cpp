#include "config.h"
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
static const std::string RESOURCE_ROOT = "../";
#else
static const std::string RESOURCE_ROOT = "../../";
#endif

int main(int argc, char* argv[]) {

  cout << "Version " << APP_VERSION_MAJOR << "." << APP_VERSION_MINOR << endl;

  sf::Window App(sf::VideoMode(800, 600), "APP");

  while (App.isOpen()) {
    sf::Event Event;
    while (App.pollEvent(Event)) {
      if (Event.type == sf::Event::Closed)
	App.close();
    }
    App.display();
  }
}