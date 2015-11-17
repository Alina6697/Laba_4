

#include "stdafx.h"
#include "software.h"
#include "virus.h"



int main()
{

	setlocale(LC_CTYPE, "Russian");
	Software t("a", "b"), t1("1", "2"), *tt;
	Virus vir("125", 4, "b", "a");
	tt = &vir;
	tt->add();
	t.add();
	t1.add();
	tt->add();
	t1.add();
	ABC::show();

	return 0;
}

