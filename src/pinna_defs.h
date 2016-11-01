//
// Created by QINSIMON on 2016/10/22.
//

#ifndef PINNA_PINNA_DEFS_H
#define PINNA_PINNA_DEFS_H

#define KEY_LENGTH 32
//#define VAL_LENGTH 32
#define LEVEL_DEPTH 4

typedef struct pin_iterm {
    char key[KEY_LENGTH];
    unsigned long long val;
};

#endif //PINNA_PINNA_DEFS_H
