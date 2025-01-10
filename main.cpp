#include "blatant-ctre-ripoff.hpp"
#include <string>

int main()
{
	std::string a = "the walrus";
	if (!CTREGEX("walrus").search(a))
		puts("fail");
	if (CTREGEX("[aeiou]").replace(a, "E") != "thE wElrEs")
		puts("fail");
	puts("done");
}
