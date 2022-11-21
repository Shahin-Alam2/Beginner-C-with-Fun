#include<stdio.h>

int Ascending(int A[],int n,int m);
int Descending(int A[],int n,int m);
int Inserting(int A[],int n,int m,int pos);

int main()

{
    int n,m,i,pos,A[100];

    printf("How many numbers?\n");
     scanf("%d",&n);
    printf("Enter number:\n");

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Insert a number:\n");
    scanf("%d",&m);

    if(A[0]<A[n-1]){
        pos=Ascending(A,n,m);
    }
    else{
        pos=Descending(A,n,m);
    }

    //printf("Main: %d\n",pos);
     n=n+1;
    Inserting(A,n,m,pos);

   /* printf("After Inserting:");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");  */

    return 0;
}



int Ascending(int A[],int n,int m){
   //ekhane Array,n,m sob ase
    int a,pos;


     for(int i=0;i<n;i++){
        if(m<A[i]){
            pos=i;
            //printf("Inside Ascending pos: %d\n",pos);
            break;
        }
     }
     return pos;
}


int Descending(int A[],int n,int m){
   //ekhane Array,n,m sob ase
    int a,pos;


     for(int i=0;i<n;i++){
        if(m>A[i]){
            pos=i;
           // printf("Inside Descending pos: %d\n",pos);
            break;
        }
     }
     return pos;
}


int Inserting(int A[],int n,int m,int pos){
 int i;

 for(i=n;i>0;i--){

    if(i==pos){
        A[i-1]=A[i];
        A[i]=m;
        break;
    }
 }
 printf("After Inserting:");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
return 0;
}
