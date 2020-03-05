//---------------------------------------------------------------------------

#pragma hdrstop

#include "DecToAscii.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Convert::Convert(){


}


int Convert::ConvertDecimalToASCII(int value){


		if (value == 0) {
			value = 30;
		}

		if (value == 1) {
			value = 31;
		}

		if (value == 2) {
			value = 32;
		}

		if (value == 3) {
			value = 33;
		}

		if (value == 4) {
			value = 34;
		}

		if (value == 5) {
			value = 35;
		}

		if (value == 6) {
			value = 36;
		}

		if (value == 7) {
			value = 37;
		}

		if (value == 8) {
			value = 38;
		}

		if (value == 9) {
			value = 39;
		}
}
