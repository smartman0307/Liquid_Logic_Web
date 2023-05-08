#ifndef _GLOBALS_H 
#define _GLOBALS_H

//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"



//--------------------------------------------------------------------
// Global Variables


void endTransaction(char *textCheck,char *transName)
{
	int textCount;
	textCount=atoi(lr_eval_string(textCheck));
	lr_save_string(transName,"transName");
	
	if(textCount>0)
	{
		lr_end_transaction(lr_eval_string("{transName}"),LR_PASS);
	}
	else
	{
		lr_end_transaction(lr_eval_string("{transName}"),LR_FAIL);
		lr_error_message("%s",lr_eval_string("{transName} failed for Iteration:{IterationNo},UserID:{UserID},LoadGenerator:{Host} at Time:{Time} for the group:{GroupName}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
}


#endif // _GLOBALS_H
