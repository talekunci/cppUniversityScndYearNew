//
// Created by Kyrylo on 27.10.2023.
//

#ifndef CPP2_THIRDTASK_H
#define CPP2_THIRDTASK_H

//Task text:
/*
     4) Нехай х = 9. Знайти чому буде дорівнювати вираз:
    а) x << 3;
    б) x >> 3;
    в) x >> 5.
*/

#include <iostream>

class ThirdTask {
public:
    static void doTask() {
        int x = 9;
        printf("4 a) %d \n", x << 3); //72
        printf("4 b) %d \n", x >> 3); //1
        printf("4 c) %d \n", x >> 5); //0
    }
};


#endif //CPP2_THIRDTASK_H
