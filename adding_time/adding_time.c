#include <stdio.h>
#include <string.h>
#include <stdlib.h>

time(char cas[], int pridaj);

int main(){

    time("10:55am", 5);

    return 0;
}


time(char cas[], int pridaj){

    char hours[3]="";
    char minutes[3]="";
    int final_minutes;
    int final_hour;
    int full_hour;
    int int_minutes;

    for (int i = 0; i < strlen(cas); i++)
{
        if (cas[i]!=':')
        {
            hours[i]=cas[i];
        }else
        {
            i++;
            for (int j = i; (cas[j]!='p') && (cas[j]!='a') ; j++)
            {
                minutes[j-3]=cas[j];
            }
            break;
        }
    }
    if((atoi(minutes)+pridaj)>=60){
        int_minutes=atoi(minutes)+pridaj;
        full_hour=int_minutes/60;
        final_hour=atoi(hours)+full_hour;
        final_minutes=int_minutes-(full_hour*60);
        
        printf("%d %d",final_hour, final_minutes);
    }else{
        final_minutes=atoi(minutes)+pridaj;
        final_hour=atoi(hours);
        printf("%d %d",final_hour, final_minutes);
    }
    

}
