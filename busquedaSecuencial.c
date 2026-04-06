int busquedaSecuencial(int arr[], int n, int objetivo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == objetivo) {
            return i; // posición encontrada
        }
    }
    return -1; // no encontrado
}