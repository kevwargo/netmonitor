#include "strtoint.h"

int getYear(char *string)
{
    char strYear[5];
    for (int i = 0; i < 4; i++)
        strYear[i] = string[i];
    strYear[4] = '\0';
    return StrToInt(strYear);
}

int getMonth(char *string)
{
    char strMonth[3];
    for (int i = 0; i < 2; i++)
        strMonth[i] = string[i + 4];
    strMonth[2] = '\0';
    return StrToInt(strMonth);
}

int getDay(char *string)
{
    char strDay[3];
    for (int i = 0; i < 2; i++)
        strDay[i] = string[i + 6];
    strDay[2] = '\0';
    return StrToInt(strDay);
}

int getHour(char *string)
{
    char strHour[3];
    for (int i = 0; i < 2; i++)
        strHour[i] = string[i + 8];
    strHour[2] = '\0';
    return StrToInt(strHour);
}

int isLeap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}