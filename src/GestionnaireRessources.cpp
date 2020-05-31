#include "GestionnaireRessources.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

template<>
std::unordered_map<std::string_view, sf::Texture> GestionnaireRessources<sf::Texture>::ressources{};

template<>
std::unordered_map<std::string_view, sf::SoundBuffer> GestionnaireRessources<sf::SoundBuffer>::ressources{};
