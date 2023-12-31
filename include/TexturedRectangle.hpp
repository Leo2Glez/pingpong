#ifndef TEXTUREDRECTANGLE_HPP
#define TEXTUREDRECTANGLE_HPP

#include <string>
// Librería de terceros
#include <SDL2/SDL.h> // Para Mac, usar <SDL.h>

class TexturedRectangle{
    public:
        // Constructor
        TexturedRectangle(SDL_Renderer* renderer, std::string filepath);
        TexturedRectangle(SDL_Renderer* renderer, std::string filepath, int redcolorkey, int greencolorkey, int bluecolorkey);

        void InitDefaults();
        // Destructor
        ~TexturedRectangle();
        // 
        SDL_Rect& GetSDLRect();
        SDL_Rect* GetSDLRectPtr();
        SDL_Texture* GetSDLTexture();

        void SetPosition(int x, int y);
        int GetPositionX();
        int GetPositionY();
        void SetDimensions(int w, int h);
        int GetWidth();
        int GetHeight();
        int GetRedColorKey();
        int GetGreenColorKey();
        int GetBlueColorKey();
        // Constructor de copia..
        // Operador de asignación de copia


        // Actualizar en cada fotograma
        void Update();
        // Renderizar
        void Render(SDL_Renderer* renderer);
    private:
        inline SDL_Rect GetRectangle() const { return m_rectangle; }

        SDL_Rect m_rectangle;
        SDL_Texture* m_texture;

        int m_redColorKey;
        int m_greenColorKey;
        int m_blueColorKey;
};


#endif
