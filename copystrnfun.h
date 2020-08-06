void copystr(unsigned short *str1, const unsigned short *str2)
{
    unsigned short len = 0;
    for (len = 0; ((str2[len] != '\0') && (len < 32)); len=len+1)
    {
        str1[len] = str2[len];
    }
        str1[len] = '\0';
}
