int busquedaBinaria(int arr[], int inicio, int fin, int objetivo) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (arr[medio] == objetivo)
            return medio;

        if (arr[medio] < objetivo)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return -1;
}