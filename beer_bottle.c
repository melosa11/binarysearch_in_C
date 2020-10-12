// You are given an integer n representing n full beer bottles.
// Given that you can exchange 3 empty beer bottles for 1 full beer bottle, 
// return the number of beer bottles you can drink.
// example input n=9 --- output=13


#include <stdio.h>
int beer_bottle(int n);

int main(void){


    int a=beer_bottle(20);
    printf("%d",a);


}

int beer_bottle(int n){

    int given_botlle=0;

    for ( n; (n/3)>=1; n-=3)
    {
        given_botlle++;
    }
    if (given_botlle>3)
    {
       return given_botlle+beer_bottle(given_botlle);
    }
    
    

    return given_botlle;

}