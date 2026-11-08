#include <stdio.h>
#include <math.h>

int main(){
    int n,sum=0;
    float sumv = 0.0;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
        
    }
    float mean;
    float variance;
    float stdeviation;

    for(int i = 0; i<n; i++){
        sum = sum+a[i];
    }
    mean = (float)sum/n;

    for(int i = 0; i<n; i++){
        sumv = sumv + pow((a[i]-mean),2);
    }

    
    variance = (float)((1.0/n)*(sumv));
    stdeviation = sqrt(variance);
    
    printf("The mean is %f", mean);
    printf("\nThe Variance is %f", variance);
    printf("\nThe Standard Deviation is %f", stdeviation);






    

    



    return 0;
}