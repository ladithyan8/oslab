#include<stdio.h>
#include<stdlib.h>
int fcfs(){
    int head=0,RQ[100],i,n,initial;

    printf("enter the no of requests");
    scanf("%d",&n);

    printf("enter the request sequence");
    for(i=0;i<=n;i++){
    scanf("%d",&RQ[i]);

    }
    printf("enter the initial head position");
    scanf("%d",&initial);
    for(i=0;i<=0;i++){
        head=head=abs(RQ[i]-initial);
        initial-RQ[i];
    }
    printf("Total head movement is %d",head);
    return 0;
}
void scan(){
    int h,n,i,j,seek=0;
    printf("enter the no of rquest");
    scanf("%d",&n);
    int R[n],A[n+3];
    printf("enter the head");
    scanf("%d",&h);
    A[0]=h;
    printf("entere the elements");
    for(i=0;i<=n;i++){
        scanf("%d",&R[i]);

    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if (R[j]>R[j-1]){
                int temp = R[j];
                R[j]=R[j+1];
                R[j+1]=temp;
            }
        }
    }
    int k=1,s;
    for(i=0;i<=n;i++){
        if (R[i]>h){
            A[k++]=R[i];
             A[k++]=0;
   	 printf("Requests serviced in the order");
    	 for(i=0;i<n+3;i++)
         printf("%d\t",A[i]);
         for(i=0;i<n+1;i++)
    	 seek=seek+abs(A[i+1]-A[i]);
   	 printf("Total seek time: %d",seek);
        }
    }
}
void main()
{
 	int ch;
 	do
	 {
 		 printf("disk scheduling\n");
  		 printf("MENU\n1.fcfs\n2.scan\n3.exit\nEnter your choice");
 	 	 scanf("%d",&ch);
 		 switch(ch)
  		 {
  			case 1: fcfs();
 				break;
 	 		case 2: scan();
  				break;
  			case 3: printf("program terminated");
 				exit(1);
  	 	}
 	}while(ch<4);
}
