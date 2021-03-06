#include <stdio.h>
#include "printColorCodingManual.h"

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

ColorPair* colorPairExt;

//Finding the number of minor, major and total number of colors
int numOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
int numOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);
int totalColorPairs = numOfMajorColors * numOfMinorColors;

//This function constructs the Color Pair structure with the color coding details 
ColorPair* constructColorCodingMap(ColorPair *colorPair){
	int minColPtr, majColPtr, pairNumCount=0;
	for (majColPtr=0; majColPtr<numOfMajorColors; majColPtr++){
		for (minColPtr=0; minColPtr<numOfMinorColors; minColPtr++){
			colorPair[pairNumCount].pairNumber = (majColPtr * numOfMinorColors) + (minColPtr+1) ;	
			colorPair[pairNumCount].majColor = majorColor[majColPtr];
			colorPair[pairNumCount].minColor = minorColor[minColPtr];
			pairNumCount++;
		}
	}
	return colorPair;
}

//Function to print the color map on console
void printColorMapOnConsole(ColorPair *colorPairExt) {
     int pairNumCount;
     printf(" | Pair Number | Major Color | Minor Color | \n");
     for (pairNumCount=0; pairNumCount<totalColorPairs; pairNumCount++){
         printf("    %d          %s          %s     \n", colorPairExt[pairNumCount].pairNumber, colorPairExt[pairNumCount].majColor, colorPairExt[pairNumCount].minColor);
    }
}



void printColorMap(void (*funPtr_printColorMapOnConsole)(ColorPair*)){
	ColorPair colorPair[totalColorPairs];
	colorPairExt = constructColorCodingMap(colorPair);
	(*funPtr_printColorMapOnConsole)(colorPairExt);
}
