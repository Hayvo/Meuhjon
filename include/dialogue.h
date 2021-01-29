#pragma once

#include <stdlib.h>
#include <iostream>

class dialogue{

    public:
        dialogue();
        void effacer_message();
        void nouveau_message(std::string message);

    private:
        std::string m_message;
        bool m_affichage = false;

};