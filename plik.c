int main() {
    unsigned int liczba_wierszy, liczba_znakow, w, k;

    printf("Podaj liczbê wierszy: ");
    scanf("%d", &liczba_wierszy);

    printf("Podaj liczbê znaków w wierszu: ");
    scanf("%d", &liczba_znakow);



    for(w = 1; w <= liczba_wierszy; w++) {
        for(k = 1; k <= liczba_znakow; k++)
            printf("*");



        printf("\n");
    }

    return 0;
}
