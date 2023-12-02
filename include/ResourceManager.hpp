// RUTA DE ARCHIVO: /c:/Users/Lenovo/OneDrive/Documentos/Escuela/LIZETTE/UNI/3Er Semestre/PROGRAMACIÓN AVANZADA/Proyecto-PrograAvanzada-1/include/ResourceManager.hpp
#ifndef RESOURCE_MANAGER_HPP
#define RESOURCE_MANAGER_HPP

#include <string>
#include <unordered_map>

// Biblioteca de terceros
#include <SDL2/SDL.h>

class ResourceManager{
    private:
        ResourceManager();
        ResourceManager(ResourceManager const&);
        ResourceManager operator=(ResourceManager const&);

        std::unordered_map<std::string, SDL_Surface*> m_surfaces;

    public:
        static ResourceManager& GetInstance();

        SDL_Surface* GetSurface(std::string filepath);
};


#endif
