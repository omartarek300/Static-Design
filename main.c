/*
 * static_Design.c
 *
 * Created: 9/20/2021 11:15:38 PM
 * Author : Omar
 */ 



int main(void)
{
	 motion_init();
	check_current_mood();
    while (1) 
    {
		check_current_mood();
		motion_speed_update();
    }
}

