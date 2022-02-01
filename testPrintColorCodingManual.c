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
        char testMajorColor[] = "Black";
	char testMinorColor[] = "Slate";
	testPrintColorMap(15, testMajorColor, testMinorColor);
	
	testMajorColor = "Violet";
	testMinorColor = "Orange";
	testPrintColorMap(22, testMajorColor, testMinorColor);
	return 0;
}
