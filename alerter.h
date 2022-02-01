#define THRESHOLD_TEMP 180

extern int alertFailureCount;

void checkNetworkFailure(int returnCode); 
float convertFarenheitToCelcius (float farenheit);
extern void alertInCelcius(float farenheit, int (*funPtr_NetworkAlert) (float));
