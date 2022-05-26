#pragma once

#include "../main.h"


typedef struct {

    // 控制电机移动的函数
    void (*motor_move)(char *axis, uint32_t len, uint32_t feed);       
    void (*motor_move_fast)(char *axis, uint32_t len, uint32_t feed);
    void (*motor_move_slow)(char *axis, uint32_t len, uint32_t feed);    // use $J, for Laser/CNC

    // 控制电机解锁
    void (*motor_unlock)(void *);

    // XY电机回零
    void (*set_xy_home)(void *);

    // Z电机回零
    void (*set_z_home)(void *);

}cmd_motor_t;


void cmd_ctrl_init(void);