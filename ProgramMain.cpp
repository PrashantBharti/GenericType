#include "basicdef.h"
#include "generictype.h"
using namespace generictypedef;

int main(int argc, char *argv[])
{
	GENERICTYPE gentype;
	gentype = 1;
	int a = gentype.GetInt();
	bool b = gentype.GetBool();
	gentype = "Prashant";
	const char* str = gentype.GetStr();
	return 0;
}