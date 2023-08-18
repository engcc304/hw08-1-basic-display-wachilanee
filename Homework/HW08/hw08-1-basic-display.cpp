/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67
*/

#include <stdio.h>

int main() {
    
    int nv,i,n,sumn = 0,sum = 0 ;
    float sum_avg = 0,sum_f = 0 ;
    printf( "Input Value n :" ) ;
    scanf( "%d",&nv ) ;

    do {
        while ( nv > i ) {
            i++ ;
            printf( "Number %d :",i ) ;
            scanf( "%d",&n ) ;
            sumn = sumn + n ;
        }
        sum = sumn ;
        sum_f = sum ;
        sum_avg = sum_f / nv ;
        printf( "Sum = %d\n",sum ) ;
        printf("Avg = %.2f",sum_avg) ;
        break ;
    } while (true);
    
    return 0;
}
