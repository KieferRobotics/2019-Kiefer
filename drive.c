#include <kipr/botball.h>
#include <Drive.h>

void drive(int r_power, int l_power, int time)
{
    mav(r,r_power);
    mav(l,l_power);
    msleep(time);

}