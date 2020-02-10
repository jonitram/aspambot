#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

// change this value to alter how many minutes the bot spams a before shutting down
// this needs to be a whole number
static const uint16_t minutes = 6;

typedef enum {
    move_up,
    move_down,
    move_right,
    move_left,
    press_a,
    press_b,
    press_x,
    press_y,
    press_r,
    hang
} action_t;

typedef struct {
    action_t action;
    uint16_t duration;
} command_t;

static const command_t wake_up_hang[] = {
    { hang, 50 }
};

static const command_t spam_a_steps[] = {
    { hang, 10 },
    { press_a, 4},
    { hang, 10 },
    { press_a, 4},
    { hang, 10 },
    { press_a, 4 },

};

#endif