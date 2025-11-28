void sumMatrix(int a[10][10], int b[10][10], int c[10][10], int r, int col) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
