#include "../include/dialogue.h"

dialogue::dialogue(){

}

void dialogue::effacer_message(){
    m_message = "";
}

void dialogue::nouveau_message(std::string message){
    m_message = message;
}