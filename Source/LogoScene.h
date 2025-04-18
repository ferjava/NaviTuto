#pragma once
#ifndef __LOGOSCENE__HPP
#define __LOGOSCENE__HPP
#include "axmol.h"
#include <chrono>
/**
 * @brief LogoScene es una escena donde se muestra el logo de axmol
 * durante 5seg
 * @version 0.0.1
 *
 */

class LogoScene : public ax::Scene
{
    public:
        bool init () override ;
        void update (float dt )override;
        LogoScene();
        ~LogoScene() override ;
    private :
        int _sceneID;
        float start ;

};

#endif //__LOGOSCENE__HPP
