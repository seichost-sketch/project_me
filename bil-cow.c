#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    srand(time(NULL));
    int n, dig1, dig2, dig3, dig4, g;
    do{
        int min=1000, max=9999;
        n = (rand() % (max-min+1))+min;
        g=n;
        dig4=g%10;
        g/=10;
        dig3=g%10;
        g/=10;
        dig2=g%10;
        g/=10;
        dig1=g;
    } while(n<1000 || n>9999 || dig1==dig2 || dig1==dig2 || dig1==dig3 || dig1==dig4 || dig2==dig3 || dig2==dig4 || dig3==dig4);
    int num, i_d, i_n, num1, num2, num3, num4, a, b, cow, bul;
    do{
        i_d=0;
        i_n=0;
        cow=0;
        bul=0;
        do{
            printf("enter your guess: ");
            scanf("%d", &num);
            int c = num;
            num4=c%10;
            c/=10;
            num3=c%10;
            c/=10;
            num2=c%10;
            c/=10;
            num1=c;
        } while(num<1000 || num>9999 || num1==num2 || num1==num2 || num1==num3 || num1==num4 || num2==num3 || num2==num4 || num3==num4);
        do{
           i_d++;
           if(i_d==1) a=dig1;
           if(i_d==2) a=dig2;
           if(i_d==3) a=dig3;
           if(i_d==4) a=dig4; 
           i_n = 0;
            do{
                i_n++;
                if(i_n==1) b=num1;
                if(i_n==2) b=num2;
                if(i_n==3) b=num3;
                if(i_n==4) b=num4;
                if(b==a){
                    if(i_n==i_d) bul++;
                    else cow++;
                }
            } while(i_n!=4);
        } while(i_d!=4);
        if(bul==4) printf("congrats you guesst the number!\n");
        else printf("there are %d cows and %d buls.\n", cow, bul);  
    } while(bul!=4);


}