#pragma once

#include "../main.h"

enum {


    PAGE_HOME = 0,

    PAGE_LOADING = 0,



};


enum{
    MKS_UI_PAGE_LOADING,  //UI界面跳转时
    MKS_UI_PAGE_HOME,  //UI主界面
    MKS_UI_PAGE_SD_LIST,  
    MKS_UI_PAGE_TOOL,
    MKS_UI_PAGE_CONTROL,
<<<<<<< HEAD
    MKS_UI_PAGE_PRINT,
=======
>>>>>>> cb5f09ac69d4aa9827ecc96315e0f03b397e0f00
};

typedef struct {
    uint8_t mks_ui_page;
    // uint8_t wait_count;
}LVGL_UI_PAGE_t;

extern LVGL_UI_PAGE_t mks_ui_page;







void lvgl_task_init(void);
