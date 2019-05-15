#include <stdio.h>
int tab[1][1];

void init_tab(int n){
    int tab[n][n];
    
    for (int i=1;i<n;i++){
        tab[i][0]=1;
        tab[i][i]=1;
        if (i>2){
            for (int j=1;j<i;j++){
                tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
            }
        }
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }
}

int main (){
    int n=0;
    printf("Quel rang de pascal tu veux ? ");
    scanf("%d",&n);
    init_tab(n);
    return 0;
}
