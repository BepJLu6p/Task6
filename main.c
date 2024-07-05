#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
int cordinates[4];
float res;

printf("Enter x1,y1,x2,y2 in massive: ");

for(int i = 0;i<4;i++){
    scanf(" %d",&cordinates[i]);
}


res = sqrt((cordinates[2] - cordinates[0])+ (cordinates[3] - cordinates[1]));

printf("\nResult is %.6f",res);

}

