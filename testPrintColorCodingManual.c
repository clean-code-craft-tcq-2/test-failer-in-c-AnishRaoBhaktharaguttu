#include <assert.h>
#include "printColorCodingManual.h"

extern ColorPair* colorPair;

void testPrintColorMap(int expectedPairNumber, char expectedMajorColor[], char expectedMinorColor[]) {
	assert(colorPair[expectedPairNumber-1].pairNumber == expectedPairNumber);
	assert(colorPair[expectedPairNumber-1].majColor == expectedMajorColor);
	assert(colorPair[expectedPairNumber-1].minColor == expectedMinorColor);
}

int main() {
	printColorMap(&printColorMapOnConsole);
	testPrintColorMap(19, "Black", "Slate");
	return 0;
}
