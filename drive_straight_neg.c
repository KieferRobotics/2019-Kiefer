#include <kipr/botball.h>
#include <drive_straight.h>

void drive_straight_neg(int r_ticks,int l_ticks)
{
    cmpc(r);
    cmpc(l);
    while (gmpc(r) > r_ticks && gmpc(l) > l_ticks)
    {
        if (gmpc(l) > gmpc(r))
        {
            mav(l,-750);
            mav(r,-700);
        }
    
        else
        {
            mav(r,-750);
            mav(l,-700);
        }
    }
}