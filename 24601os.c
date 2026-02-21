#include<stdio.h>
int main(){
    int at[5]={0,1,2,3,4};
    int bt[5]={5,7,6,2,4};
    int tat[5],ct[5],wt[5];
    for(int i=0;i<5;i++){
        if(i==0){
            ct[i]=bt[i];
        }
        else{
            ct[i]=ct[i-1]+bt[i];
        }
        //printf("%d\n",ct[i]); 
    }
    for(int i=0; i<5; i++){
        tat[i]=ct[i]-at[i];
        //printf("%d\n",tat[i]);
    }
    for(int i=0; i<5;i++){
        wt[i]=tat[i]-bt[i];
    }
    for(int i=0;i<5;i++){
        printf("%d %d %d\n",ct[i],tat[i],wt[i]);
    }
}
