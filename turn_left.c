#include <kipr/botball.h>
#define r 0
#define l 3



void turn_left()
{
    cmpc(r);
    cmpc(l);

    while(gmpc(r) < 1565 && gmpc(l) > -965)
    {
        mav(r,500);
        mav(l,-500);
    }
}



