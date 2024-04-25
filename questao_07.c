int divisiveis(int arr[], int tam, int x) {
    int qtdDivisiveis = 0;
    if (tam == 0) {
        return 0;
    } else {
        int resto = arr[tam - 1] % x;
        if (resto == 0) {
            qtdDivisiveis++;
        }
        return qtdDivisiveis + divisiveis(arr, tam - 1, x);
    }
}