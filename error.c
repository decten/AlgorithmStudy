#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool chk(const char *s, int p) {
    int ret = 0;
    for (int i = 0; s[i]; i++)
        ret = (ret * 10 + s[i] - '0') % p;
    return (ret==0) ? true : false; //ret이 0이면 나누어진 것
}
int main(){
    bool c[1000000]= {true,};
    int result = 0;
    char* a;
    int b;
    scanf("%s %d", a,&b);

    for(int i=2; i<=sqrt(b); i++ ){
      if (!c[i]) continue;
      for(int j=i+i; j<=b; j+=i) 
        c[j]=false;
    }
    
    for(int i=2; i<b; i++){
      if(!c[i]) continue;
      if(chk(a,i)){
        printf("BAD %d", i);
        return 0;
      }
    }

    printf("GOOD");

    return 0;
}
