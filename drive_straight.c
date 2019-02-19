#include <kipr/botball.h>
#include <drive_straight.h>

void drive_straight(int r_ticks,int l_ticks)
{
    cmpc(r);
    cmpc(l);
    while (gmpc(r) < r_ticks && gmpc(l) < l_ticks)
    {
        if (gmpc(l) < gmpc(r))
        {
            mav(l,250);
            mav(r,200);
        }
    
        else
        {
            mav(r,250);
            mav(l,200);
        }
    }
}