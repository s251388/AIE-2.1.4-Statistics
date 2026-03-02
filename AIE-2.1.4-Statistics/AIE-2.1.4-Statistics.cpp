
#include <iostream>
#include <cassert>

using namespace std;


int Accuracy(int Shots, int Hits) {

	assert(Shots >= Hits >= 0);

	int Percentage = 0;

	if (Hits > 0) {
		Percentage = 100 * Hits / Shots;		// To avoid the entire percentage from being cut off, i multiply the Hits by 100 first, this only cuts
	}											// off ("rounds down", in a way) any decimal value that would have been attached to the percentage.

	return Percentage;
}

int main()
{
    


}

