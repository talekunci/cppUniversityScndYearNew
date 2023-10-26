//
// Created by Kyrylo on 26.10.2023.
//

#ifndef CPP2_SECONDTASK_H
#define CPP2_SECONDTASK_H

//Task text:
/*
        4) Визначити значення логічного величини при всіх можливих зна-
    ченнях логічних величин х і у (побудувати таблицю істинності):

    к) !x && !y;
    л) y || !(x && !y);
    м) F = !(x || !y) || !y.
 */

#include <iostream>

class SecondTask {
public:
    static void doTask() {
        printf("4) \n");
// a) !x && !y
        printf("a) !X && !Y \n");
        printf("| X | Y | !X | !Y | !X && !Y |\n");
        bool X = 0;
        bool Y = 0;
        printf("| %d | %d | %d | %d | %d |\n",
               X, Y, !X, !Y, !X && !Y);
        X = 0;
        Y = 1;
        printf("| %d | %d | %d | %d | %d |\n",
               X, Y, !X, !Y, !X && !Y);
        X = 1;
        Y = 0;
        printf("| %d | %d | %d | %d | %d |\n",
               X, Y, !X, !Y, !X && !Y);
        X = 1;
        Y = 1;
        printf("| %d | %d | %d | %d | %d |\n",
               X, Y, !X, !Y, !X && !Y);
// b) y || !(x && !y)
        printf("b) Y || !(X && !Y) \n");
        printf("|X |Y | !Y |X && !Y | !(X&&!Y) |Y ||!(X&&!Y) |");
        X = 0;
        Y = 0;
        printf("| %d | %d | %d | %d | %d | %d |\n",
               X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));

        X = 0;
        Y = 1;
        printf("| %d | %d | %d | %d | %d | %d |\n",
               X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));

        X = 1;
        Y = 0;
        printf("| %d | %d | %d | %d | %d | %d |\n",
               X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));

        X = 1;
        Y = 1;
        printf("| %d | %d | %d | %d | %d | %d |\n",
               X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));
        // c) !(x || !y) || !y
        printf("c) F = !(X || !Y) || !Y \n");
        printf("| X | Y | !Y | X || !Y | !(X||!Y) | F |\n");
        X = 0;
        Y = 0;
        printf("| %d | %d | %d | %d | %d | %d |\n", X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);

        X = 0;
        Y = 1;
        printf("| %d | %d | %d | %d | %d | %d |\n", X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);

        X = 1;
        Y = 0;
        printf("| %d | %d | %d | %d | %d | %d |\n", X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);

        X = 1;
        Y = 1;
        printf("| %d | %d | %d | %d | %d | %d |\n", X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);
    }
};


#endif //CPP2_SECONDTASK_H
