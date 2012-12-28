#include <stdio.h>
#include "date.h"

void getPrevHour(char *string)
{
    int year = getYear(string);
    int month = getMonth(string);
    int day = getDay(string);
    int hour = getHour(string);
    if (hour != 0)
        hour--;
    else
    {
        hour = 23;
        if (day != 1)
            day--;
        else
        {
            if (month != 1)
            {
                month--;
                switch (month)
                {
                    case 1: case 3: case 5: case 7: case 8: case 10: day = 31; break;
                    case 4: case 6: case 9: case 11: day = 30; break;
                    case 2:
                        if (isLeap(year))
                            day = 29;
                        else
                            day = 28;
                        break;
                }
            }
            else
            {
                year--;
                month = 12;
                day = 31;
            }
        }
    }
    printf("%04d%02d%02d%02d\n", year, month, day, hour);
}

int main(int argc, char **argv)
{
    getPrevHour(argv[1]);
}