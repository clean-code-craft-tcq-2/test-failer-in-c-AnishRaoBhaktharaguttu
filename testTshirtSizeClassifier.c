//Test file to test the size classifier implementations

#include "tshirtSizeClassifier.h"
#include <assert.h>

//Test and assert if the size classifier is working fine
void testTshirtSizeBasedOnShoulderMeasurement(int measure_cms, char expectedSize) {
	assert(getTshirtSizeBasedOnShoulderMeasurement(measure_cms) == expectedSize);
}

int main() {
	testTshirtSizeBasedOnShoulderMeasurement(30,'S');
	testTshirtSizeBasedOnShoulderMeasurement(40,'M');
	testTshirtSizeBasedOnShoulderMeasurement(42,'L');
	testTshirtSizeBasedOnShoulderMeasurement(55,'\0');
	return 0;
}
