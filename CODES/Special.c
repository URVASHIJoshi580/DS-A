#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, m,i,j;
    printf("Enter the Number of rows and columns=");
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
   
    bool flag=true;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
             scanf("%d", &a[i][j]);
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(i+1 < n && j+1 < m){
                if(a[i][j] != a[i+1][j+1]){
                    flag = false;
                    break;
                }
            }
        }
        
    }
    if(flag == true){
        printf("  Special Matrix");
    }else{
        printf("  Not Special Matrix");
    }
    
}
