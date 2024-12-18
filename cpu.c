#include<stdio.h>
#include<stdlib.h>
void fcfs(){
    int TAT[50],CT[50],PID[50],AT[50],BT[50],WT[50],p[50],i,j,h,n,temp;
    float AWT=0,ATAT=0;

    printf("enter the number of process");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        printf("enter the process");
        scanf("%d",&PID[i]);
        printf("enter the arrival time");
        scanf("%d",&AT[i]);
        printf("enter the burst time");
        scanf("%d",&BT[i]);
        printf("\n");
        

    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1-i;j++){
            if(AT[j]>AT[j+1]){
                
                temp=AT[i];
                AT[i]=AT[i+1];
                AT[i+1]=temp;

                temp=PID[i];
                PID[i]=PID[i+1];
                PID[i+1]=temp;

                temp=BT[i];
                BT[i]=BT[i+1];
                BT[i+1]=temp;


            }
            else if(AT[j]==AT[j+1]){
                if(PID[j]>PID[j+1]){

                  temp=AT[i];
                  AT[i]=AT[i+1];
                  AT[i+1]=temp;

                  temp=PID[i];
                  PID[i]=PID[i+1];
                  PID[i+1]=temp;

                  temp=BT[i];
                  BT[i]=BT[i+1];
                  BT[i+1]=temp;

                }
            }
        }
    }
    CT[0]=AT[0]+BT[0];
    TAT[0]=CT[0]-AT[0];
    WT[0]=TAT[0]-BT[0];

    for(i=0;i<=n;i++){
         CT[i]=CT[i-1]+BT[i];
         TAT[i]=CT[i]-AT[i];
         WT[i]=TAT[i]-BT[i];

    }
    printf("\nPID\tAT\tBT\tWT\tTAT ");
    for(i=0;i<=n;i++){
        printf("\n%d\t%d\t%d\t%d\t%d\t",PID[i],AT[i],BT[i],WT[i],TAT[i]);
        AWT += WT[i];
        ATAT += TAT[i];
    }
    AWT=AWT/n;
    ATAT=ATAT/n;
    printf("\nthe averge vwaiting time is :%f\n the average turn around time is %f",AWT,ATAT);
}
void sjf(){
    int TAT[50],CT[50],PID[50],AT[50],BT[50],WT[50],p[50],i,j,h,n,temp;
    float AWT=0,ATAT=0;

    printf("enter the number of process");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        printf("enter the process");
        scanf("%d",&PID[i]);
        printf("enter the arrival time");
        scanf("%d",&AT[i]);
        printf("enter the burst time");
        scanf("%d",&BT[i]);
        printf("\n");
        

    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1-i;j++){
            if(BT[j]>BT[j+1]){
                
                temp=AT[i];
                AT[i]=AT[i+1];
                AT[i+1]=temp;

                temp=PID[i];
                PID[i]=PID[i+1];
                PID[i+1]=temp;

                temp=BT[i];
                BT[i]=BT[i+1];
                BT[i+1]=temp;


            }
            else if(BT[j]==BT[j+1]){
                if(PID[j]>PID[j+1]){

                  temp=AT[i];
                  AT[i]=AT[i+1];
                  AT[i+1]=temp;

                  temp=PID[i];
                  PID[i]=PID[i+1];
                  PID[i+1]=temp;

                  temp=BT[i];
                  BT[i]=BT[i+1];
                  BT[i+1]=temp;

                }
            }
        }
    }
    CT[0]=AT[0]+BT[0];
    TAT[0]=CT[0]-AT[0];
    WT[0]=TAT[0]-BT[0];

    for(i=0;i<=n;i++){
         CT[i]=CT[i-1]+BT[i];
         TAT[i]=CT[i]-AT[i];
         WT[i]=TAT[i]-BT[i];

    }
    printf("\nPID\tAT\tBT\tWT\tTAT ");
    for(i=0;i<=n;i++){
        printf("\n%d\t%d\t%d\t%d\t%d\t",PID[i],AT[i],BT[i],WT[i],TAT[i]);
        AWT += WT[i];
        ATAT += TAT[i];
    }
    AWT=AWT/n;
    ATAT=ATAT/n;
    printf("\nthe averge vwaiting time is :%f\n the average turn around time is %f",AWT,ATAT);
}
void prior(){
    int TAT[50],CT[50],PID[50],AT[50],BT[50],WT[50],PR[50],p[50],i,j,h,n,temp;
    float AWT=0,ATAT=0;

    printf("enter the number of process");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        printf("enter the process");
        scanf("%d",&PID[i]);
        printf("enter the arrival time");
        scanf("%d",&AT[i]);
        printf("enter the burst time");
        scanf("%d",&BT[i]);
        printf("enter the priority");
        scanf("%d",&PR[i]);
        printf("\n");
        

    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1-i;j++){
            if(PR[j]>PR[j+1]){
                
                temp=AT[i];
                AT[i]=AT[i+1];
                AT[i+1]=temp;

                temp=PID[i];
                PID[i]=PID[i+1];
                PID[i+1]=temp;

                temp=BT[i];
                BT[i]=BT[i+1];
                BT[i+1]=temp;

                temp=PR[j];
				PR[j]=PR[j+1];
				PR[j+1]=temp;


            }
            else if(PR[j]==PR[j+1]){
                if(PID[j]>PID[j+1]){

                  temp=AT[i];
                  AT[i]=AT[i+1];
                  AT[i+1]=temp;

                  temp=PID[i];
                  PID[i]=PID[i+1];
                  PID[i+1]=temp;

                  temp=BT[i];
                  BT[i]=BT[i+1];
                  BT[i+1]=temp;

                  temp=PR[j];
				  PR[j]=PR[j+1];
				  PR[j+1]=temp;

                }
            }
        }
    }
    CT[0]=AT[0]+BT[0];
    TAT[0]=CT[0]-AT[0];
    WT[0]=TAT[0]-BT[0];

    for(i=0;i<=n;i++){
         CT[i]=CT[i-1]+BT[i];
         TAT[i]=CT[i]-AT[i];
         WT[i]=TAT[i]-BT[i];

    }
    printf("\nPID\tAT\tBT\tPR\tWT\tTAT ");
    for(i=0;i<=n;i++){
        printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",PID[i],AT[i],BT[i],PR[i],WT[i],TAT[i]);
        AWT += WT[i];
        ATAT += TAT[i];
    }
    AWT=AWT/n;
    ATAT=ATAT/n;
    printf("\nthe averge vwaiting time is :%f\n the average turn around time is %f",AWT,ATAT);
}
void roundrobin(){
    int n,i,j,temp,tq,Q[50],l,k=0,m,c=0;
    struct process{
        int PID,AT,BT,CT,TAT,WT,FT;
    }
    P[50];
    float AWT=0,ATAT=0;

     printf("enter the number of process");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        printf("enter the process");
        scanf("%d",&P[i].PID);
        printf("enter the arrival time");
        scanf("%d",&P[i].AT);
        printf("enter the burst time");
        scanf("%d",&P[i].BT);
        printf("\n");

        P[i].FT=P[i].BT;
       
    }
     l=i;
        printf("enter the time slice");
        scanf("%d",&tq);
        while(k<=l){
            m=Q[k];
            if(P[m].FT>tq){
                c+=tq;
                P[m].FT=P[m].FT-tq;
                P[m].CT=c;
                l++;
                Q[l]=m;
            }
            else{
                c+=P[m].FT;
                P[m].CT=c;
            }
            k++;

        }
         P[0].CT=P[0].AT+P[0].BT;
	    P[0].TAT=P[0].CT-P[0].AT;
	    P[0].WT=P[0].TAT-P[0].BT;
	    for(i=0;i<n;i++)
	    {
		P[i].CT=P[i-1].CT+P[i].BT;
		P[i].TAT=P[i].CT-P[i].AT;
		P[i].WT=P[i].TAT-P[i].BT;
	    }
        printf("\nPID\tAT\tBT\tPR\tWT\tTAT ");
    for(i=0;i<=n;i++){
        printf("\n%d\t%d\t%d\t%d\t%d\t",P[i].PID,P[i].AT,P[i].BT,P[i].WT,P[i].TAT);
        AWT += P[i].WT;
        ATAT += P[i].TAT;
    }
    AWT=AWT/n;
    ATAT=ATAT/n;
    printf("\nthe averge vwaiting time is :%f\n the average turn around time is %f",AWT,ATAT);
}

void main()
{
	int ch;
	while(1)
	{
		printf("\nMENU\n1.FCFS\n2.SJF\n3.PRIORITY\n4.ROUNDROBIN\n5.EXIT\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: fcfs();
				break;
			case 2: sjf();
				break;
			case 3: prior();
				break;
			case 4: roundrobin();
				break;
			case 5: printf("/nprogram terminated");
				exit(0);
			default:printf("invaild choice");
		}
	}
}


