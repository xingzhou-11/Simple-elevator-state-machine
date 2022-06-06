#ifndef _ELEVATOR_STATE_H_
#define _ELEVATOR_STATE_H_

enum
{
    stop   = 1,
    upward,
    down,
    open,
    close,
}state;

extern int current_position;
extern int target_location;

void state_stop_enter(void);
void state_stop_end(void);

void state_upward_enter(void);
void state_upward_end(void);

void state_down_enter(void);
void state_down_end(void);

void state_open_enter(void);
void state_open_end(void);

void state_close_enter(void);
void state_close_end(void);

#endif