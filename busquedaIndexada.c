// Supongamos bloques de tamaño fijo
int busquedaIndexada(int arr[], int n, int objetivo, int bloque) {
    int i = 0;

    // Buscar bloque
    while (i < n && arr[i] <= objetivo) {
        i += bloque;
    }

    // Buscar dentro del bloque
    int inicio = i - bloque;
    if (inicio < 0) inicio = 0;

    for (int j = inicio; j < i && j < n; j++) {
        if (arr[j] == objetivo)
            return j;
    }

    return -1;
}