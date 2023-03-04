int i, j, k, s;

for(i = 0; i < n - 1, i++{ //3 + 3n
    for(j = i + 1; j < n; j++){ //3 + 3n
        for(k = 1; k < j; k++){ //2 + 2n
           s = 1; //1n
        }
    }
}

/* Cálculo da complexidade computacional:

    3 + 3n + n*(3n + 2)
    3 + 3n + 3n² + 2n
    5n² + 5n + 3
    3 + 3n + n*(3n² + 5n +3)
    3 + 3n + 3n³ + 5n² + 3n
    5n³ + 5n² + 6n + 3

Complexidade Total= n³ */
