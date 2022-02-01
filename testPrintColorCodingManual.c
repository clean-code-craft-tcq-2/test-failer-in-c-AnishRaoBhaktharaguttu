#include <assert.h>
#include "printColorCodingManual.h"

extern ColorPair* colorPair;

void testPrintColorMap(int expectedPairNumber, char expectedMajorColor[], char expectedMinorColor[]) {
	assert(colorPair[expectedPairNumber-1].PairNumber == expectedPairNumber);
	assert(colorPair[expectedPairNumber-1].MajorColor == expectedMajorColor);
	assert(colorPair[expectedPairNumber-1].MinorColor == expectedMinorColor);
}

int main() {
	printColorMap(&printColorMaponConsole);
	testPrintColorMap(19, "Black, "Slate");
	return 0;
}
