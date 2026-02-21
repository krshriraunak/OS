#include<stdio.h>
int main(){
    int at[5]={0,0,0,0,0};
    int bt1[5]={5,7,6,8,5};
    int io[5]={2,2,3,1,2};
    int bt2[5]={3,2,4,2,5};
    int pct[5],ct[5],tat[5],wt[5];
    for(int i=0;i<5;i++){
        if(i==0){
            pct[i]=bt1[i]+io[i];
        }
        else{
            pct[i]=pct[i-1]+bt1[i]+io[i];
        }
        //printf("%d\n",pct[i]);
    }
    for (int i=0;i<5;i++){
        if(i==0){
            ct[i]=pct[4-i]+bt2[i];
        }
        else{
            ct[i]=bt2[i]+ct[i-1];
        }
    }
    for (int i=0;i<5;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-(bt1[i]+bt2[i]);
    }
     for (int i=0;i<5;i++){
        printf("%d %d %d %d\n",pct[i],ct[i],tat[i],wt[i]);
     }
}