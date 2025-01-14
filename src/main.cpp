#include "main.h"



void app_task_init(void) {

    // 初始化串口， 开启串口任务
    client_init();

    send_buff_init();

    // EEPROM(NVS) init
    eeprom_init();

    // task init lvgl
    lvgl_task_init();

    Timer_Init();
}

void setup() {

    // if any bug reset?
    wdt_set_disable();

    // tunr off the lcd and wait the logo is OK
    tft_backlight_disable(); 

    // all task init here
    app_task_init();

    // disp Board Info
    report_mcu_info();

    // init test
    // lv_draw_test();

    // turn on the lcd and finish Init
    tft_backlight_enable();
}


void loop() {
    // for grbl main
    grbl_protocol_main_loop();
}



