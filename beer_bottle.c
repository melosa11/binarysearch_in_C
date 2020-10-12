// You are given an integer n representing n full beer bottles.
// Given that you can exchange 3 empty beer bottles for 1 full beer bottle, 
// return the number of beer bottles you can drink.
// example input n=9 --- output=13


#include <stdio.h>
int beer_bottles(int n);
int give_me_bottle(int n);

int main(void){


    printf("you can drink %d bottles of beer",beer_bottles(22));


}

int give_me_bottle(int n){
    int start_bottle=n;
    int given_bottle=0;

    for ( int i=n; (i/3)>=1; i-=3)
    {
        given_bottle++;
    }
    
    if (given_bottle<3)
    {
       return given_bottle;;
    }else
    {
        return given_bottle+give_me_bottle(given_bottle);
    }
}

int beer_bottles(int n){
    int count_of_bottles=n+give_me_bottle(n);
    return count_of_bottles;
}