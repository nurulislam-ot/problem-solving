#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, m;
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    int flag = 1;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                  flag = 0;
                  break;
                }
            } 
            else if (i + j == n - 1) {
              if (matrix[i][j] != 1) {
                flag = 0;
                break;
              }
            }
            else {
                if(matrix[i][j]!=0) {
                    flag=0;
                    break;
                }
            }
            
        }
    }
    
    if(flag == 1) printf("YES");
    else printf("NO");
    return 0;
}
