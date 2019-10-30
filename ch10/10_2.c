#include <stdio.h>
void copy_arr(double [5],double [5],int);
void copy_ptr(double *,double *,int);
int main (void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5],target2[5];
    copy_arr(source,target1,5);
    copy_ptr(source,target2,5);

    int i;
    for (i = 0;i < 5;i++){
        printf ("%.1lf %5.1lf %5.1lf\n",source[i],target1[i],target2[i]);
    }

    return 0;
}
void copy_arr(double source[5],double target1[5],int b)
{
    int i;
    for (i = 0;i < b;i++){
        target1[i] = source[i];
    }
}
void copy_ptr(double * source,double * target2,int b){
    int i ;
    for (i = 0;i < b;i++){
        *(target2 + i) = *(source + i); 
    }
}