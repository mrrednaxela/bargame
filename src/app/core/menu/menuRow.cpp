//
// Created by Alex Pinchuk on 23.06.2022.
//

#include "menuRow.h"

class menuRow{
private:
    string name="";
    int coordX=0;
    int coordY=0;
public:
    string getName(){
        return name;
    };

    void setName(string itSetName){
          itSetName=name;
    };

    int getCoordX(){
        return coordX;
    };

    void setCoordX(int itSetCoordX){
        itSetCoordX=coordX;
    };

    int getCoordY(){
        return coordY;
    };

    void setCoordY(int itSetCoordY){
        itSetCoordY=coordY;
    };

};
