#include <stdio.h>

char getTshirtSizeBasedOnShoulderMeasurement(int measure_cms) {
    char sizeName = '\0';
    if(measure_cms < 38) {
        sizeName = 'S';
    } else if(measure_cms > 38 && measure_cms < 42) {
        sizeName = 'M';
    } else if(measure_cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}
