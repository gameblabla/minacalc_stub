#include <stdint.h>
#include "NoteDataStructures.h"
#include <vector>


using namespace std;

typedef vector<float> SDiffs;
typedef vector<SDiffs> MinaSD;

typedef vector<vector<float>> Finger;
typedef vector<Finger> ProcessedFingers;
typedef vector<float> JackSeq;


int GetCalcVersion()
{
	return 100;
}

vector<float> MinaSDCalc(const vector<NoteInfo>& NoteInfo, int numTracks, float musicrate, float goal, float timingscale, bool negbpms)
{
}

MinaSD MinaSDCalc(const vector<NoteInfo>& NoteInfo, int numTracks, float goal, float timingscale, bool negbpms)
{
}
