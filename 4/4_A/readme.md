# AIM:
TowriteprograminCtoconvert giveninfixexpressionintopostfixnotation

# DESCRIPTION:
Apolynomialishomogeneousorderedlistofpairs<\exponent,coefficient>,whereeachcoefficientisunique.
Example:3x2+5x+7
Linkedlistrepresentation

Themainfieldsofpolynomialarecoefficientandexponent,inlinkedlistitwillhaveonemorefiledcalled„link‟fieldto pointtonexttermin the polynomial.Ifthere are
„n‟termsinthepolynomialthen„'n‟suchnodeshavetobecreated.
# ALGORITHM:	
STEP 1 : Getthetwo polynomials.Firstpolynomialis P1andsecond polynomialisP2
STEP 2 : Foradditionoftwopolynomialsifexponentsofboththepolynomialsaresamethenweadthecoefficients. For storingthe resultwewill create thethird linkedlists sayP3.
STEP 3 : If Exponent of P2 is greater than exponent of P1 then keep the P3 as P2.
STEP 4 : If Exponentof P2isgreaterthan exponentofP1 thenkeepthe P3as P1
STEP 5 : IfExponentofP2isequaltotheexponentofP1thenaddthecoefficientofP1andcoefficientofP2 as coefficient of P3.
STEP 6 : Continuetheabovestepfrom3 to5 until endo thetwo polynomials.
STEP 7 : Ifanyof thepolynomial isended keepP3 asthe remainingpolynomial.8: Stop theexecution.
