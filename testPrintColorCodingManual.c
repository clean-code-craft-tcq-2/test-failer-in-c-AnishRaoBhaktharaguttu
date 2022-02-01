#include <assert.h>
#include "printColorCodingManual.h"

extern ColorPair* colorPairExt;

void testPrintColorMap(int expectedPairNumber, char expectedMajorColor[], char expectedMinorColor[]) {
	assert(colorPairExt[expectedPairNumber-1].pairNumber == expectedPairNumber);
	assert(colorPairExt[expectedPairNumber-1].majColor == expectedMajorColor);
	assert(colorPairExt[expectedPairNumber-1].minColor == expectedMinorColor);
}

int main() {
	printColorMap(&printColorMapOnConsole);
        char majorColor[] = "Yellow";
	char minorColor[] = "Brown";
	testPrintColorMap(19, majorColor, minorColor);
	return 0;
}
