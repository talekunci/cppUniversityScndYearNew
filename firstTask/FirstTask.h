//
// Created by Kyrylo on 26.10.2023.
//

#ifndef CPP2_FIRSTTASK_H
#define CPP2_FIRSTTASK_H

//Task text:
/*
    Дано тризначне число. Визначити кількість сотень, десятків і оди-
    ниць в ньому. Написати число, отримане при прочитанні початкового чи-
    сла з права на ліво.
*/

#include <iostream>

class FirstTask {
public:
    static void doTask() {
        short a = 352, sot = 0, dec = 0, ed = 0;
        sot = a / 100; // sot = 3
        dec = a % 100 / 10; // dec = 5
        ed = a % 10; // ed = 2
        a = ed * 100 + dec * 10 + sot;
        printf("8) a = %d \n", a);
    }
};


#endif //CPP2_FIRSTTASK_H
