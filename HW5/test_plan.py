'''
TEST PLAN FOR POLYNOMIAL CLASS

Essential tests are *'d. Testing should not continue if an essential test fails.


Input argument setup

[ ] Construct two polys with integer, complex, and float components
[ ] Construct two polys with integer components


Basic functionality

[ ] *Test initialiation
[ ] *Test __eq__ for "True"
[ ] *Test __eq__ for "False"
[ ] *Make sure no methods modify their input arguments
[ ] Test __eq__ for two identical polys a and b, but insert some extra terms with coefficient 0 in poly b
[ ] Test __getitem__ for pre-existing elements, positive and negative exponents
[ ] Test __getitem__ for elements that do not exist (should return 0), positive and negative exponents
[ ] Test __setitem__ for pre-existing elements, positive and negative exponents
[ ] Test __setitem__ for elements that do not exist yet, positive and negative exponents
[ ] Test __eval__
[ ] Test __add__
[ ] Test __sub__
[ ] Test __mul__
[ ] Test deriv()
[ ] Make sure all Polynomial methods except __setitem__ do not modify input args

Efficiency

[ ] Are sparse polynomials stored efficiently? How does size of Poly([0]) compare with Poly[0,0,0,0,0,0,0,0,0,0,0,0,0,0]
[ ] Does __add__ delete elements whose coefficients are newly zero?
[ ] Does __sub__ delete elements whose coefficients are newly zero?
[ ] Does __mul__ delete elements whose coefficients are newly zero?
[ ] Does deriv() delete elements whose coefficients are newly zero?
[ ] Does __setitem__ delete elements that are set to zero?

Advanced testing

[ ] Does == direclty compare exponents and coefficients, or does it evaluate the two polynomials at some number?
[ ] Do all operations return the same data type that was inserted? add, sub, mul, deriv, eval
[ ] Measure execution time for __mul__ and deriv()


'''



