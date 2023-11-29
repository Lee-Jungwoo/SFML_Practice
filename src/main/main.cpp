#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "../lib/Game.h"




using namespace sf;
int main()
{

    RenderWindow* window = new RenderWindow(VideoMode(720, 1280), "new");

    WaterBucket waterBucket;
    
    Vector2f size = window->getView().getSize();

    while (window->isOpen())
    {
        Event event;

        window->clear(Color(220, 255, 191,255));
        
        waterBucket.draw(window);

        

        while (window->pollEvent(event))
        {
            if(event.type == Event::KeyPressed){
                waterBucket.consume();
            }
                

            

            if (event.type == Event::Closed)
                window->close();
        }





        window->display();
    }

    return 0;
}