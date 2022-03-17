#include <stdio.h>

int main()
{
    printf("tablica 5x1\n");
    int tablica[5], a, b;
    b=0;

    for(a=0;a<5;++a){
        b++;
        tablica[a]=b;
        printf("%d  ", tablica[a]);

    }
    printf("\n");
    printf("tablica 4x4 \n");
    int tablica2[4][4], x, y, z;
    z=0;
    for(x=0; x<4; ++x){
        for(y=0; y<4; ++y){
            z++;
            tablica2[x][y]=z;
            printf("%d  ", tablica2[x][y]);
        }
    }
    printf("\n");
    printf("tablica 3x3x3\n");
    int tablica3[3][3][3], e, f, g , h;
    h=0;
    for(e=0;e<3;++e){
        for(f=0;f<3;++f){
            for(g=0;g<3;++g){
                h++;
                tablica3[e][f][g]=h;
                printf("%d ", tablica3[e][f][g]);
            }
        }
    }
    return 0;
}
