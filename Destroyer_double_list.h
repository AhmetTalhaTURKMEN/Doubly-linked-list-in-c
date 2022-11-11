LIST* destroyList (LIST* pList)
{
	NODE* deletePtr;

	if (pList)
	   {
	    while (pList->count > 0)
	       {
	        free (pList->head->ad);

	        deletePtr    = pList->head;
	        pList->head  = pList->head->next;
	        pList->count--;
	        free (deletePtr);
	       }
	    free (pList);
	   }

	return NULL;
}
