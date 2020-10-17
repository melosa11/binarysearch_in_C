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
    if( n <= 2 ) {
         return n;
    }
    return n + give_me_bottle(n/3);
}

int beer_bottles(int n){
    return give_me_bottle(n);
}
