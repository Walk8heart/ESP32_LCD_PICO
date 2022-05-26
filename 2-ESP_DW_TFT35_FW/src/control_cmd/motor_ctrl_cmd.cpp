#include "motor_ctrl_cmd.h"

cmd_motor_t cmd_motor;

// void (*motor_move)(char *axis, uint32_t len, uint32_t feed);

void grbl_motor_move(char *axis, uint32_t len, uint32_t feed) {

    uint8_t cmd_str[96];

    sprintf((char *)cmd_str, "G91G1%c%dF%d\n", axis, len, feed);

    send_cmd(CLIENT_SERIAL, (const char *)cmd_str);
}


void cmd_ctrl_init(void) { 

    cmd_motor.motor_move = grbl_motor_move;

}