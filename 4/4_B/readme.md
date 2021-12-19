# AIM:
To write program in C to convert given infix expression to postfix notation

# ALGORITHM:<br>
1:Getaninfixexpression.<br>
2:Scantheexpressionfromlefttoright.<br>
3:Ifanyoperandscomedisplayit.<br>
4:If the incoming symbolinaoperatorandhasmore prioritythenthesymbolintothestack.<br>
5:If theincomingoperatorhas less prioritythanthestack symbol thencopythe symbol atthe<br>
topofthestackand then print untiltheconditionbecomesfalse andpush thefollowingoperatoronthe stack.<br>
6:Ifthesymbol is‘)’then copyoperatorsfrom topofthestack.Deletionopeningparenthesisisfrom top ofthe stack.<br>
7:Stop theprocess.<br>

# DESCRIPTION:
Infix expression:The expression of the form a op b. When an operator is in-between every pair ofoperands.<br>
Postfix expression:The expression of the form a b op. When an operator is followed for everypairofoperands.<br>
