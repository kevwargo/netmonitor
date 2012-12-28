int power(int x, int n)
{
    int result = 1;
    for(int i = 0; i < n; i++)
        result *= x;
    return result;
}

int StrToInt(char *string)
{
    int result = 0;
    int neg = 0;
    if (string[0] == '-')
    {
        string++;
        neg = 1;
    }
    int length = 0;
    while (string[length] != '\0')
        length++;
    for (int i = length - 1; i >= 0; i--)
        result += (string[i] - '0') * power(10, length - i - 1);
    if (neg)
        return -result;
    return result;
}