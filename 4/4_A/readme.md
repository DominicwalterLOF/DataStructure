# AIM:<br>
TowriteprograminCtoconvert giveninfixexpressionintopostfixnotation<br>
<br>
# DESCRIPTION:<br>
Apolynomialishomogeneousorderedlistofpairs<\exponent,coefficient>,whereeachcoefficientisunique.<br>
Example:3x2+5x+7<br>
Linkedlistrepresentation<br>
<br>
Themainfieldsofpolynomialarecoefficientandexponent,inlinkedlistitwillhaveonemorefiledcalled„link‟fieldto pointtonexttermin the polynomial.Ifthere are<br>
„n‟termsinthepolynomialthen„'n‟suchnodeshavetobecreated.<br>
# ALGORITHM:	<br>
STEP 1 : Getthetwo polynomials.Firstpolynomialis P1andsecond polynomialisP2<br>
STEP 2 : Foradditionoftwopolynomialsifexponentsofboththepolynomialsaresamethenweadthecoefficients. For storingthe resultwewill create thethird linkedlists sayP3.<br>
STEP 3 : If Exponent of P2 is greater than exponent of P1 then keep the P3 as P2.<br>
STEP 4 : If Exponentof P2isgreaterthan exponentofP1 thenkeepthe P3as P1<br>
STEP 5 : IfExponentofP2isequaltotheexponentofP1thenaddthecoefficientofP1andcoefficientofP2 as coefficient of P3.<br>
STEP 6 : Continuetheabovestepfrom3 to5 until endo thetwo polynomials.<br>
STEP 7 : Ifanyof thepolynomial isended keepP3 asthe remainingpolynomial.8: Stop theexecution.<br>
<br>![alt text](https://github.com/DominicwalterLOF/DataStructure/blob/main/4/4_A/output_A.jpg?raw=true)
