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
        char testMajorColor1[] = "Black";
	char testMinorColor1[] = "Slate";
	testPrintColorMap(15, testMajorColor1, testMinorColor1);
	
	char testMajorColor2[] = "Violet";
	char testMinorColor2[] = "Orange";
	testPrintColorMap(22, testMajorColor2, testMinorColor2);
	return 0;
}
