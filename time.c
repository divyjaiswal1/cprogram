#include <stdio.h>
#include <time.h>
int main ()
{
	//A clock may work with 24 hour concept
	//list the countries
	//calculate the time according to system
	int input,extra;
	
	printf("Enter the country name or code\n");
	printf("1.India\n2.Mexico\n3.Japan\n");
	scanf("\n%d",&input);
    time_t s, val = 1;
    struct tm* current_time;
  
    // time in seconds
    s = time(NULL);
  
    // to get current time
    current_time = localtime(&s);
  
    // print time in minutes,
    // hours and seconds
	/*
	The time.h header defines four variable types, two macro and various functions for manipulating date and time. A brief description of the variable types defined in the header time.h is as :

size_t : This is the unsigned integral type and is the result of the sizeof keyword.
clock_t : This is a type suitable for storing the processor time.
time_t is : This is a type suitable for storing the calendar time.
struct tm : This is a structure used to hold the time and date.
*/
	switch(input)
	{
		case 1 : printf("Time in India : %02d:%02d:%02d",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);
		break;
		case 2 : printf("Time in Mexico City : %02d:%02d:%02d",
           current_time->tm_hour-10,
           current_time->tm_min-30,
           current_time->tm_sec);
		break;
		case 3 :
		extra = (current_time->tm_min+30) - 60;
		if(current_time->tm_min + 30 > 60)
		{	printf("Extra : %d\n", extra);
			printf("Time in Tokyo : %02d:%02d:%02d",
           current_time->tm_hour+4,
           extra,
           current_time->tm_sec);	
		}
		else
		{
		printf("Time in Tokyo : %02d:%02d:%02d",
           current_time->tm_hour+3,
           current_time->tm_min+30,
           current_time->tm_sec);	
		}		 
		break;
	}
	return(0);
}
