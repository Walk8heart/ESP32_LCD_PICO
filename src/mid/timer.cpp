#include "timer.h"

hw_timer_t *timer;
int timer_interruptCounter = 0;


void IRAM_ATTR TimerEvent()
{
    timer_interruptCounter++;
<<<<<<< HEAD
    if(timer_interruptCounter > 1000) 
    {
        MKS_PICO_CMD_SEND("?\n");
        timer_interruptCounter = 0;

        print_time_change_pro();
=======
    if(timer_interruptCounter > 5000) 
    {
        MKS_PICO_CMD_SEND("?\n");
        timer_interruptCounter = 0;
>>>>>>> cb5f09ac69d4aa9827ecc96315e0f03b397e0f00
    }
    send_overtime_check();

}

void IRAM_ATTR Timer_Init()
{
    timer = timerBegin(0, 80, true);  //开启定时器0 80分频 80M/80 1M 
    timerAttachInterrupt(timer, &TimerEvent, true);
    timerAlarmWrite(timer, 1000, true); //1毫秒触发定时器中断
    timerAlarmEnable(timer); 
<<<<<<< HEAD
}

=======
}
>>>>>>> cb5f09ac69d4aa9827ecc96315e0f03b397e0f00
