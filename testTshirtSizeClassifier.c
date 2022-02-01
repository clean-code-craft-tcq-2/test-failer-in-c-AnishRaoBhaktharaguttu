//Test file to test the size classifier implementations

#include "tshirtSizeClassifier.h"
#include <assert.h>

//Test and assert if the size classifier is working fine
void testTshirtSizeBasedOnShoulderMeasurement(int measure_cms, char expectedSize) {
	assert(getTshirtSizeBasedOnShoulderMeasurement(measure_cms) == expectedSize);
}

int main() {
	testTshirtSizeBasedOnShoulderMeasurement(32,'\0');
	testTshirtSizeBasedOnShoulderMeasurement(37,'s');
	testTshirtSizeBasedOnShoulderMeasurement(41,'M');
	testTshirtSizeBasedOnShoulderMeasurement(46,'L');
        testTshirtSizeBasedOnShoulderMeasurement(50,'\0');
	return 0;
}
