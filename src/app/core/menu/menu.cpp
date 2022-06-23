//
// Created by Alex Pinchuk on 23.06.2022.
//

#include "menu.h"
#include "./menuRow.cpp"

class menu {
private:
    int currentItem;
    menuRow *rows[];
public:

    menu(menuRow *_rows[],
         int _currentItem = 0){
        currentItem = _currentItem;
        *rows = *_rows;
    }

    int getCurrentItem(){
        return currentItem;
    };

    void setCurrentItem(int itSetCurrent){
        currentItem=itSetCurrent;
    };

    menuRow* getRows(){
        return reinterpret_cast<menuRow *>(rows);
    };

    void setRows(menuRow *_rows[]){
        *rows=*_rows;
    };

};


