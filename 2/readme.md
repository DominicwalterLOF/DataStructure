# AIM:
To write a program for Queue using array implementation.

# DESCRIPTION:
Aqueuedatastructurecanbeimplementedusingonedimensionalarray.But,queueimplementedusingarraycanstoreonlyfixednumberofdatavalues.Theimplementationofqueuedatastructureusingarrayisverysimple,justdefineaonedimensionalarrayofspecificsizeandinsertordeletethevaluesintothatarraybyusingFIFO(FirstInFirstOut)principlewiththehelpofvariables'front'and'rear'.Initiallyboth'front'and'rear'aresetto-1.Whenever,wewanttoinsertanewvalueintothequeue,increment'rear'valuebyoneandtheninsertatthatposition.Wheneverwewanttodeleteavaluefromthequeue,thenincrement'front'valuebyoneandthendisplaythevalueat'front'positionasdeletedelement.

# ALGORITHM:
1.	Defineaarraywhichstoresqueueelements..
2.	Theoperationsonthequeueare
a.	a)INSERTdataintothequeue
b.	b)DELETEdataoutofqueue
3.	INSERTDATAINTOqueue
a.	Enterthedatatobeinsertedintoqueue.
b.	IfTOPisNULL
i.	Theinputdataisthefirstnodeinqueue.
ii.	Thelinkofthenodeis NULL.
iii.	TOPpointstothatnode.
c.	IfTOPisNOTNULL
i.	ThelinkofTOPpointstothenewnode.
ii.	TOPpointstothatnode.
4.	DELETEDATAFROMqueue
a.	IfTOPisNULL
i.	thequeueisempty
b.	IfTOPisNOTNULL
i.	ThelinkofTOPisthecurrentTOP.
ii.	TheperviousTOPispoppedfromqueue.

5.	Thequeuerepresentedbylinkedlististraversedtodisplayitscontent.

![alt text](output.png "Title")
