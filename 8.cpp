int diagonalSum(int a[10][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    return sum;
}
