#include <stdio.h>
#include <string.h>
#include "elevator_state.h"

void state_machine(void)
{
   
    switch (state)
    {
    case stop:
        state_stop_enter();

        if(target_location != 0)
        {
            if(current_position < target_location)
            {
                state_stop_end();
                state_upward_enter();
                state = upward;
            }
            else if (current_position == target_location)
            {
                state_stop_end();
                state_open_enter();
                state = open;
            }
            else if (current_position > target_location)
            {
                state_stop_end();
                state_down_enter();
                state = down;
            }
        }
        
        break;

    case upward:
        state_upward_end();
        state = stop;

        break;

    case down:
        state_down_end();
        state = stop;
        break;

    case open:
        state_open_end();
        state_close_enter();
        state = close;

        break;

    case close:
        state_close_end();
        state = stop;

        break;
    
    default:
        break;
    }
}

int main()
{
    state = stop;
    
    while (1)
    {
        state_machine();
    }

    return 0;
}
