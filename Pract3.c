#include<stdio.h>
int coin(int coins[],int no_coins,int amt,int count,int min){
    if(amt==0){
        if (count<min)
        {
            min=count;
        }            
        return min;
    }
    for(int i=0;i<no_coins;i++){
        if(coins[i]<=amt){
           min = coin(coins,no_coins,amt-coins[i],count+1,min);
        }
    }
    return min;
}

int main(){
    int n,amt;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&amt);

    int min = coin(a,n,amt,0,1110);
    printf("%d",min);
    

}