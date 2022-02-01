#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int networkAlertStub(float celcius) {
	printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    if (celcius <= THRESHOLD_TEMP) {
		  return 200;
	} else {
		  return 500;
	}
}

void testAlertInCelcius(float farenheit, int expectedFailureCount){
	alertInCelcius(farenheit, networkAlertStub);
	assert(alertFailureCount == expectedFailureCount);
}

int main() {
	testAlertInCelcius(350.4,1);
	testAlertInCelcius(412.86,1);
	testAlertInCelcius(270,2);
  testAlertInCelcius(299.5,3);
	return 0;
}
