#include <stdio.h>
#include "date.h"
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;
    else
    {
        int hour;
        if (strlen(argv[1]) == 2)
            hour = StrToInt(argv[1]);
        else
            hour = getHour(argv[1]);
        if (hour <= 10 && hour != 0)
            return 0;
        else
            return 1;
    }
}