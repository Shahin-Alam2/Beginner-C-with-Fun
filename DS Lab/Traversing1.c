#include<stdio.h>

int main()
{
    int i,n,A[100];

    printf("How many numbers?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
      scanf("%d",&A[i]);
    }

    //Maximum value
    int max=A[0];
    for(i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    printf("Maximum value: %d\n",max);

    //Minimum value
    int min=A[0];
    for(i=0;i<n;i++){
        if(min>A[i]){
            min=A[i];
        }
    }
    printf("Minimum value: %d\n",min);

    //Sum n Average value
    int sum=0,avg;
    for(i=0;i<n;i++){
        sum=sum+A[i];
    }
    printf("Sum: %d\n",sum);
    avg=sum/n;
    printf("Average value: %d\n",avg);

    //Sin value
    for(i=0;i<n;i++){
    printf("Sin value of %d: %lf\n",A[i],sin(A[i]));
    }
    return 0;
}
