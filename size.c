#include <stdio.h>
#include<math.h>

int main() {
    
    float x,n;
    printf("enter x: ");
    scanf("%f",&x);
    printf("enter n: ");
    scanf("%f",&n);

    float y=0;
    for(int i=0; i<n; i++){
        y += 1/(sqrt(pow(x,i)));
    }

    float avg;
    avg = y/n;
    printf("%f", avg);


    return 0;
}
