// #include <stdio.h>
// #define NUM_RATES((int)(sizeof(values) /sizeod (value[0])))
// #define INITIAL_BALANCE 100.00
// int main(void){
//     int i, low_rate, num_years, years;
//     double value [5];

//     printf("taux d'internet :");
//     scanf("%d", &low_rate);
//     printf("Nombre d'amnes : ");
//     scanf("%d", num_years);

//     printf("\n Annees");
//     for (i = 0; i < NUM_RATES; i++){
//         printf("%6d", low_rate+i);
//         value[i] = INITIAL_BALANCE;
//     }
//     printf("\n");

//     for (year = 1; year <= num_years; years++){
//         printf("%3d", year);
//         for (i = 0; i < NUM_RATES; i++){
//             valuep[i] += (low_rate + i) / 100.0* value[i];
//             printf("%7.2f", value[i]);
//         }
//         printf("\n");
//         }
// return 0;
//     }
    
#include <stdio.h>

#define NUM_RATES ((int)(sizeof(values)/sizeof(values[0])))
#define INITIAL_BALANCE 100.0

int main(void) {
    int i, low_rate, num_years, year;
    double values[5];

    
    printf("Taux d'intérêt annuel de départ (%%) : ");
    scanf("%d", &low_rate);

    printf("Nombre d'années : ");
    scanf("%d", &num_years);


    printf("\nAnnée");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%7d%%", low_rate + i);
        values[i] = INITIAL_BALANCE; 
    }
    printf("\n");


    for (year = 1; year <= num_years; year++) {
        printf("%3d", year);
        for (i = 0; i < NUM_RATES; i++) {
     
            double monthly_rate = (low_rate + i) / 100.0 / 12;
            for (int month = 1; month <= 12; month++) {
                values[i] += values[i] * monthly_rate;
            }
            printf("%9.2f", values[i]);
        }
        printf("\n");
    }

    return 0;
}
