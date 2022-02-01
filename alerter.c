#include <stdio.h>
#include "alerter.h"

int alertFailureCount = 0;

float convertFarenheitToCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    return celcius;
}

void checkNetworkFailure(int returnCode) {
	if (returnCode != 200) {
		alertFailureCount += 1;
    }
}

void alertInCelcius(float farenheit, int (*funPtr_NetworkAlert) (float)) {
	float celcius = convertFarenheitToCelcius(farenheit);
    // Passing network check stub as function pointer 
	int returnCode = (*funPtr_NetworkAlert)(celcius);
	checkNetworkFailure(returnCode);
}
