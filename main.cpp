#include "features.h"

using namespace iron_learning;

int main(int argc, char** argv)
{
	features_t f = features_t();
	f.set(1, 0.5);
	f.get(1);
	return 0;
}
