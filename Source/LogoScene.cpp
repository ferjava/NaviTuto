#include "LogoScene.h"
#include <stdexcept>
using namespace ax;

bool LogoScene::init()
{
    if(!Scene::init())
    {
        return false ;
    }
    auto visibleSize = _director->getVisibleSize();
    auto origin      = _director->getVisibleOrigin();
    auto safeArea    = _director->getSafeAreaRect();
    auto safeOrigin  = safeArea.origin;
    //añadimos el sprite
    auto logoax = Sprite::create("LogoAxmol.png");
    if(logoax == nullptr)
        {
            throw std::runtime_error("No se ha podido                                     cargar la imagen LogoAxmol.png");
                                     return false;

        }
    else
        {
            logoax->setPosition(Vec2(visibleSize.width /2 + origin.x ,visibleSize.height/2 + origin.y));
            this->addChild(logoax,0);

        }
            start = 5.0f;
            scheduleUpdate();
            return true;

}
void LogoScene::update(float dt)
{

    /** Realizamos una accion de retraso de 5 sg */
    start -= dt;
    if(start <= 0)
        {
            _director->end();
        }

}
LogoScene::LogoScene()
{

}
LogoScene::~LogoScene()
{

}
