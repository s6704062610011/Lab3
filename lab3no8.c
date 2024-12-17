#include <stdio.h>
int main()
{
	 int hour, minute, second, n;
	 scanf("%d%d%d", &hour, &minute, &second);
	 printf("Next minutes: ");
	 scanf("%d", &n);
	 if (n != 0)
	 {
		 minute = minute + n;
		 if (minute < 120)
	 	{
		 	hour++;
		 	minute = minute - 60;
	 	}
	 	else if (minute >= 120)
	 	{
	 		hour = hour + 2;
	 		minute = minute - 120;
	 	}
	 	if(hour>=24)
	 	{
	 		hour=hour-24;
	 	}
	 }
	 printf("Hour: %d\n", hour);
	 printf("Minute: %d\n", minute);
	 printf("second: %d\n", second);
	 return 0;
}
