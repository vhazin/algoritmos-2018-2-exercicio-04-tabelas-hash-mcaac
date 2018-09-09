#include <stdio.h>

int main(){

    int x,c,m,n,i,j,h,d,k,e;
    int matriz[100][200];

    scanf("%d",&n);

    while(n>0){
        c=0;
        m=0;
        h=0;
        x=0;
        scanf("%d %d",&m,&c);
        int matriz[100][200]={{0}};

        while(c>0){
        scanf("%d",&x);
        h=x%m;
        k=0;
        i=0;
        j=1;
        e=n;
        while(k!=1){
            if(h==i){
                if(matriz[i][j]==0){
                matriz[i][j]=x;
                k=1;
                c--;
                    }
                else{
                    j++;   
                    } 
             }                
            else{       
            i++;  }      
        }
        }
        d=m;
        for(i=m;i>0;i--){
            matriz[i][0]=m;
            m--;
        }
        
        for(i=0;i<d;i++){
          
            for(j=0;j<200;j++){
                if(matriz[i][j]==0){
                  if(i==0 && j==0){
                    printf("%d -> ",matriz[i][j]);
                    e--;
                  }
                  else{
                printf("\\\n");
                goto OLA;}
                }
                else{
                printf("%d -> ",matriz[i][j]);
                }
            }
            OLA:;  
        }
        
        if(e>=1){
          printf("\n");
        }
        
        n--;
    } 
    
    return 0;
}
