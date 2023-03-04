int i, j, k,

for(i = 0; i < n; i++{ //2 + 2n
    for(j = 0; j < n; j++){ //2 + 2n
        r[i][j] = 0; //1n
        for(k = 0; k < n; k++){ //2 + 2n
            r[i][j] += a[i][k] * b[k][j]; //3n
        }
    }
}

/* Cálculo da complexidade computacional:

    3n + 2 + n*(5n + 2)
    3n + 2 + 5n² + 2n
    5n² + 5n + 2
    2 + 2n + n*(5n² + 5n +2)
    2 + 2n + 5n³ + 5n² + 2n
    5n³ + 5n² + 4n + 2

Complexidade    Total = n³ */

