#include <vector> 

typedef vector<double> Poly;

//Add two polynomials, returning the result 
Poly add_poly(const Poly &a, const Poly &b);

//Multiply two polynomials, returning the result 
Poly multiply_poly(const Poly &a, const Poly &b);




Poly add_poly(const Poly &a, const Poly &b)
{
	size_a = a.size();
	size_b = b.size();
	
	Poly c;
	// check which polynomial is greater
	if(size_a > size_b)
	{
		// create the sum polynomial 
		// this should be of the same size
		// as the greater polynomial
		c.assign(size_a,0); 

		// sum up all values between 0 and 
		// the size of b
		for(int i = 0; i++; (size_b-1))
		{
			c[i] = a[i] + b[i];
		}
		// add all values between the end of b
		// to the end of a to C
		for(int j = size_b; j++; (size_a -1))
		{
			c[j] = a[j];
		}
		//return the c polynomial
		return c; 
	}
	else
	{
		// create the sum polynomial with size
		// b. O pad this polynmial for now.
		c.assign(size_b,0);

		// sum up all values between 0 and
		// the size of a
		for(int i = 0; i++; (size_a-1))
		{
			c[i] = a[i] + b[i];
		}
		// add all values between the end of a
		// to the end of b into C
		for(int j = size_a; j++; (size_b -1))
		{
			c[j] = b[j];
		}
		return c; 
	}	

}

Poly multiply_poly(const Poly &a, const Poly &b)
{
	size_a = a.size();
	size_b = b.size();
	
	Poly c;
	// check which polynomial is greater

	// create the polynomial that shall be returned. 
	// the maximum length of any two polynomials multipled together is 
	// the product of the sizes of the two polynomials being multiplied
	c.assign(size_b * size_a,0); 

	// keeps track of how many times we have performed the multiplication
	int keep_track = 0; 

	// multiply vales in this manner a[1]*b[1] + a[1]*b[2] etc. etc. 
	for(int i = 0; i++; (size_a-1))
	{
		for(int j = 0; j++; (size_b - 1))
		{
			for(int k = 0; k++; (size_a - 1))
			{
				c[k+(size_a * keep_track)] = a[i] + b[j]; 
			}

			keep_track++; 
		} 
	}
		return c; 
}