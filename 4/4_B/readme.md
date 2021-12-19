# AIM:
To write program in C to convert given infix expression to postfix notation

# ALGORITHM:<br>
STEP 1 :Getaninfixexpression.<br>
STEP 2 :Scantheexpressionfromlefttoright.<br>
STEP 3 :Ifanyoperandscomedisplayit.<br>
STEP 4 :If the incoming symbolinaoperatorandhasmore prioritythenthesymbolintothestack.<br>
STEP 5 :If theincomingoperatorhas less prioritythanthestack symbol thencopythe symbol at the
top of the stack and then print untiltheconditionbecomesfalse andpush thefollowingoperatoronthe stack.<br>
STEP 6 :Ifthesymbol is‘)’then copyoperatorsfrom topofthestack.Deletionopeningparenthesisisfrom top ofthe stack.<br>
STEP 7 :Stop theprocess.<br>

# DESCRIPTION:
Infix expression:The expression of the form a op b. When an operator is in-between every pair ofoperands.<br>
Postfix expression:The expression of the form a b op. When an operator is followed for everypairofoperands.<br><br><Br>
![alt text](https://github.com/DominicwalterLOF/DataStructure/blob/main/4/4_B/output_b.jpg?raw=true)
