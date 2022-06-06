#include <stdio.h>

int current_position = 1;
int target_location = 0;


void state_stop_enter(void)
{
    printf("电梯停止 \n");

    if(target_location == 0)
        scanf("%d", &target_location);
    
}

void state_stop_end(void)
{
    
}



void state_upward_enter(void)
{
    printf("电梯上升 \n");
}

void state_upward_end(void)
{
    printf("到达 %d 楼\n", target_location);
    
    //更新当前位置
    current_position = target_location;
}



void state_down_enter(void)
{
    printf("电梯下降 \n");
}

void state_down_end(void)
{
    printf("到达 %d 楼\n", target_location);

    //更新当前位置
    current_position = target_location;
}



void state_open_enter(void)
{
    printf("打开电梯门 \n");
}

void state_open_end(void)
{
    
}



void state_close_enter(void)
{
    printf("电梯门已关闭 \n");
}

void state_close_end(void)
{
    // 目标位置清零
    target_location = 0;
}