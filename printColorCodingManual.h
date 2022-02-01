//Define Color Pair structure
typedef struct {
    int pairNumber;
    const char* majColor;
    const char* minColor;
} ColorPair;

extern ColorPair* constructColorCodingMap(ColorPair* colorPair);
extern void printColorMapOnConsole(ColorPair* colorPairExt);
extern void printColorMap(void (*funPtr_printColorMapOnConsole)(ColorPair*));
