#include <stdio.h>
#include <assert.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

//Finding the number of minor and major colors
int numOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
int numOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);

//Define Color Pair structure
typedef struct {
    int pairNumber;
    const char* majColor;
    const char* minColor;
} ColorPair;

//Function to print the color map on console
void printColorMap(int pairNumber, const char *majorColor, const char *minorColor ) {
	printf("%d | %s | %s\n", pairNumber, majorColor, minorColor);
}

ColorPair getColorInfoFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    colorPair.pairNumber = pairNumber;
    colorPair.majColor = majorColor[(pairNumber / numOfMajorColors)];
    colorPair.minColor = minorColor[(pairNumber % numOfMinorColors)];
    return colorPair;
}

//Test function to assert the major and minor color obtained from pair number.
void testPairNumberToColor(int pairNumber, const char* expectedMajorColor, const char* expectedMinorColor){
    ColorPair colorPair = getColorInfoFromPairNumber(pairNumber);
    assert(colorPair.pairNumber == pairNumber);
    assert(colorPair.majColor == expectedMajorColor);
    assert(colorPair.minColor == expectedMinorColor);
}

//Print and test the color map information
int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printColorMap(i * 5 + j, majorColor[i], minorColor[i]);
            testPairNumberToColor(i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
