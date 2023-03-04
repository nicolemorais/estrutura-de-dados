int i, j, s;
s = 0; //1

for(i = 1; i < n - 1; i++){ //3 + 3n
    for(j = 1; j < 2 * n; j++){ //3 + 2n
        s = s + 1; //2n
    }
}

/* Cálculo da complexidade computacional:

    3 + 3n + n*(4n + 3)
    3 + 3n + 4n² + 3n
    4n² + 6n + 3 + 1
    4n² + 6n + 4

Complexidade Total = n³ */

