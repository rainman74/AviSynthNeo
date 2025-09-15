#ifndef _AVS_VERSION_H_
#define _AVS_VERSION_H_

#include "arch.h"

#define       AVS_PPSTR_(x)    	#x
#define       AVS_PPSTR(x)    	AVS_PPSTR_(x)

#define       AVS_PROJECT       AviSynth+ 
#define       AVS_MAJOR_VER     3
#define       AVS_MINOR_VER     4
#define       AVS_SEQREV        2827
#define       AVS_BRANCH        Neo
#define		  AVS_FULLVERSION	AVS_PPSTR(AVS_PROJECT) " " AVS_PPSTR(AVS_MAJOR_VER) "." AVS_PPSTR(AVS_MINOR_VER) ".0 (r" AVS_PPSTR(AVS_SEQREV) ", " AVS_PPSTR(AVS_BRANCH) ", " AVS_PPSTR(AVS_ARCH) ")"

#endif  //  _AVS_VERSION_H_
