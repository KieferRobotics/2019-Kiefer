#include <kipr/botball.h>
#include <et_drive.h>

void et_drive(int x, int range)
{
    while (analog_et(x) < range)
    {
        motor(l,100);
        motor(r,100);
    }   

    ao();
}