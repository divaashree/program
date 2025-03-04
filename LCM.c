#include <stdio.h>
#include <string.h>

int LCS(char a[], char b[], char lcs_str[]) {
    int m = strlen(a);
    int n = strlen(b);
    int dp[m+1][n+1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
        }
    }

    int index = dp[m][n];
    lcs_str[index] = '\0'; // Set the terminating character

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (a[i-1] == b[j-1]) {
            lcs_str[index-1] = a[i-1];
            i--;
            j--;
            index--;
        }
        else if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }

    return dp[m][n];
}

void main() {
    char a[] = "abaaba";
    char b[] = "babbab";
    char lcs_str[100];
    int length = LCS(a, b, lcs_str);
    printf("The longest common subsequence is %s with length %d\n", lcs_str, length);
}
