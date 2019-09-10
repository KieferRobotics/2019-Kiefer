#include <kipr/botball.h>
#define r 0
#define l 3

void neg_right_ninety()
{
     
    cmpc(r);
    cmpc(l);
    
    while(gmpc(r) > -1775 && gmpc(l) < 745)
    {
    mav(r,-200);
    mav(l,200);
    }
}
