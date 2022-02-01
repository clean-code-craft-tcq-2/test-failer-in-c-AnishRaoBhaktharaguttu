#include <stdio.h>
#include <assert.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

//Finding the number of minor, major and total number of colors
int numOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
int numOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);
int totalColorPairs = numOfMajorColors * numOfMinorColors;

//Define Color Pair structure
typedef struct {
    int pairNumber;
    const char* majColor;
    const char* minColor;
} ColorPair;

//This function constructs the Color Pair structure with the color coding details 
ColorPair* constructColorCodingMap(ColorPair *colorPair){
	int minColPtr, majColPtr, pairNumCount=0;
	for (majColPtr=0; majColPtr<numOfMajorColors; majColPtr++){
		for (minColPtr=0; minColPtr<numOfMinorColors; minColPtr++){
			colorPair[pairNumCount].PairNumber = (majColPtr * numOfMinorColors) + (minColPtr+1) ;	
			colorPair[pairNumCount].MajorColor = majorColor[majColPtr]);
			colorPair[pairNumCount].MinorColor = minorColor[minColPtr]);
			pairNumCount++;
		}
	}
	return colorPair;
}

//Function to print the color map on console
void printColorMapOnConsole(ColorPair *colorPair) {
     int pairNumCount;
     printf(" | Pair Number | Major Color | Minor Color | \n");
     for (pairNumCount=0; pairNumCount<totalColorPairs; pairNumCount++){
         printf("    %d          %s          %s     \n", colorPair[pairNumCount].PairNumber, colorPair[pairNumCount].MajorColor, colorPair[pairNumCount].MinorColor);
    }
}



void printColorMap(void (*funPtr_printColorMapOnConsole)(ColorPair*)){
	ColorPair colorPair[totalColorPairs];
	(*funPtr_printColorMapOnConsole)(constructColorCodingMap(colorPair));
}
