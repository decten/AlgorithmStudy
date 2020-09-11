#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool check(const char* s, int p) 
{
    int ret = 0;
    for (int i = 0; s[i]; i++)
        ret = (ret * 10 + s[i] - '0') % p;
    return !ret ? true : false ;
}

int main() {
    bool c[1000000] = { true, };
    char a[1000];
    int b;
    scanf("%s %d", a, &b);

    for (int i = 2; i <= sqrt(b); i++) 
    {
        if (!c[i]) continue;
        for (int j = i + i; j <= b; j += i) 
            c[j] = true;
    }
    bool flag = false;
    int ret = b;
    for (int i = 2; i < b; i++) 
    {
        if (c[i]) continue;
        if( check(a,i)) 
        {
            flag = true;
            ret = ((ret > i) ? i:ret);
        }
    }

    printf("%s ", flag? "BAD" : "GOOD");
    if (flag) printf("%d",ret);

    return 0;
}

