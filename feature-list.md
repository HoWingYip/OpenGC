# Feature List

## 1. Pure Math Functions
- Addition, subtraction, multiplication, division, parentheses
- Exponentiation (including non-integer, rational and real exponents), and logarithms. Special buttons are:
  - Square, cube, sqrt, cbrt
  - Exponential function and 10^x
  - Natural log and log10
- Constants: pi, e
- Trigonometric and inverse trigonometric functions (just sin, cos, tan and their inverses should do)
- Complex numbers (and complex-compatible arithmetic operations), along with:
  - Conjugation, real and imaginary parts, argument, magnitude
- Numerical derivative calculation at a given point
- Numerical (definite) integration over a given interval (perhaps including nesting, which is not supported on TI-84)
- Sigma notation evaluation (perhaps including nesting, which is not supported on TI-84)
- Counting functions: factorial, nPr, nCr

## 2. Statistics
Everything under the 'distr' and 'stat' pages on the TI-84 Plus CE.

### Distributions:
- Normal: PDF, CDF, inverse
- Student's t: PDF, CDF, inverse
- Chi-squared: PDF, CDF
- F-distribution: PDF, CDF
- Binomial: PDF, CDF, inverse
- Poisson: PDF, CDF
- Geometric: PDF, CDF

### Statistical calculations:
- Entering of data into lists + sorting lists in ascending and descending order
- Univariate and bivariate statistics, namely:
  - Sample mean of each variable (x̄)
  - Sum of values for each variable (Σx)
  - Sum of squares of values for each variable (Σx²)
  - Sum of products of variables (Σxy)
  - Sample variance: Bessel-corrected (s²) and non-Bessel-corrected (σ²)
  - Number of samples (n)
  - Minimum and maximum value of each variable (min(X), max(X))
- Regression:
  - Least-squares:
    - Linear, quadratic, cubic, quartic
    - Logarithmic, exponential, power (ax^b), logistic (c / (1 + ae^(-bx)))
    - Sinusoidal
  - Median-median (unique to Texas Instruments GCs)
  - Manual-fit linear regression (optional)

### Statistical tests:
- TODO: complete this section

## 3. Solvers
- Polynomial root finder (up to degree 10)
  - Solutions should be given in rational form when possible, especially for polynomials of up to degree 3 (replicates TI-84 Plus CE functionality)
- Simultaneous linear equation solver (up to 10 equations and unknowns)
  - Note: should support the case where number of equations < number of unknowns, in which case some unknowns are expressed in terms of other unknowns.
- Root finding for arbitrary function through graphing

## 4. Graphing
- Should support plotting of multiple arbitrary univariate functions on the same coordinate plane
- Additional calculations:
  - Find value of function at given x-value
  - Numerical root-finding within a given interval
    - There exist a wealth of algorithms for this, including naive bisection (binary search to within some accuracy bound), the Newton-Raphson method, and several others you can probably find online.
  - Finding of local maxima and minima within a given interval
  - Graph intersection finding (trivial; simply find a root of the difference between the two functions)
  - Derivative and definite integral calculation (same as under section 1)
    - Consider highlighting area under graph if integral function is called when in graphing mode
