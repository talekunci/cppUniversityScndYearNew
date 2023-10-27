//
// Created by Kyrylo on 27.10.2023.
//

#ifndef CPP2_FOURTHTASK_H
#define CPP2_FOURTHTASK_H

//Task text:
/*
     4) Написати програму обчислення площі кільця. Програма повинна

    перевіряти правильність вихідних даних. Нижче наведено рекомендова-
    ний вид екрану програми (дані, введені користувачем, виділені напівжир-
    ним):

    Обчислення площі кільця
    Введіть данні:
    радіус кільця (см) -> 3.5
    радіус отвору (см) -> 7
     Помилка! Радіус отвору не може бути більше радіусу кі-
    льця
 */

#include <iostream>
#include "windows.h"
using namespace std;

class FourthTask {
public:
    static void doTask() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        float rl,r2; // радіус кільця і отвору
        float s; // площа кільця
        printf("\nEnter data:\n");
        printf("the circle's radius (cm) -> ");
        scanf("%f",&rl);
        printf("the hole radius (cm) -> ");
        scanf("%f",&r2);
        if (rl > r2)
        {
            s = 2 * 3.14 * (rl - r2);
            printf("\nRing's area %6.2f cm2\n", s);
        }
        else
        {
            printf("\nError! The circle's radius cannot be");
            printf("bigger than the radius of the ring!\n ");
        }
    }
};


#endif //CPP2_FOURTHTASK_H
