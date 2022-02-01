#include <stdio.h>
#include "tshirtSizeClassifier.h"

char getTshirtSizeBasedOnShoulderMeasurement(int measure_cms) {
    char sizeName = '\0';
    if(measure_cms < SMALL_SIZE_LOWER_THRESHOLD) {
        sizeName = 'S';
    } else if(measure_cms > MEDIUM_SIZE_LOWER_THRESHOLD && measure_cms < MEDIUM_SIZE_UPPER_THRESHOLD) {
        sizeName = 'M';
    } else if(measure_cms > MEDIUM_SIZE_UPPER_THRESHOLD) {
        sizeName = 'L';
    }
    return sizeName;
}
