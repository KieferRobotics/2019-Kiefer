void slow_servo(int port, int start_position, int end_position, int change_of_ticks)
{
    enable_servos();

    int x=start_position; //will be used to hold the current position of the servo

    set_servo_position(port, start_position);// connected to port 0
    msleep(200);

    while(get_servo_position(port)< end_position)
    {
        set_servo_position(port,x);
        msleep(5);// this number controls the speed of the servo movement
        x= x + change_of_ticks;// servo position moves 1 click with each iteraion of the loop

    }
}
