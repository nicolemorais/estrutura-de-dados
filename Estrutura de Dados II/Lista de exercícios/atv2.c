int i, j, k, s;

for(i = 0; i < n - 1, i++{ //3 + 3n
    for(j = i + 1; j < n; j++){ //3 + 3n
        for(k = 1; k < j; k++){ //2 + 2n
           s = 1; //1n
        }
    }
}

/* C�lculo da complexidade computacional:

    3 + 3n + n*(3n + 2)
    3 + 3n + 3n� + 2n
    5n� + 5n + 3
    3 + 3n + n*(3n� + 5n +3)
    3 + 3n + 3n� + 5n� + 3n
    5n� + 5n� + 6n + 3

Complexidade Total= n� */
