#include <stdio.h>

int main()
{
    float a,b,c;
    printf("a   b   c\n");
    scanf("%F  %F  %F",&a,&b,&c);
    if (a>0){
        if(b>0){
            ++a;
        }else{
            if(c>0){
                if (a<5){
                    ++b;
                }else{
                    if(b<5){
                        ++c;
                    } else{
                        --a;
                    } if(c<5){
                        --b;
                    }else{
                        --c;
                    }
                }
            }
        }
    }else{
        a=0;
    }
    printf("a=%.1f\nb=%.1f\nc=%.1f\n", a,b,c);
    return 0;
}