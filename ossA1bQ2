#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the dimensions of the matrix:");
    scanf("%d",&n);
    scanf("%d",&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int trans[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i]=mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",trans[i][j]);
        }
    }
    return 0;
}
