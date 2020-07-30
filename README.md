Question 3:

Write a program that does the following:
• Ask user to input three Real numbers a, b and c. They represent the parameters of a
quadratic equation 𝑎𝑥! + 𝑏𝑥 + 𝑐 = 0

• Classify to one of the following:
- ’Infinite number of solutions’ (for example, 0𝑥! + 0𝑥 + 0 = 0 has infinite number of solutions)
- ’No solution’ (for example, 0𝑥! + 0𝑥 + 4 = 0 has no solution)
- ’No real solution’ (for example, 𝑥! + 4 = 0 has no real solutions)
- ’One real solution’
- ’Two real solutions’
• In cases there are 1 or 2 real solutions, also print the solutions.

Notes:
1. If 𝑎 ≠ 0 and there are real solutions to the equation, you can get these solutions using
 the following formula:
The number of solutions depends on whether (b2 -4ac) is positive, zero, or negative.
2. In order to calculate the square root of a number (of type double).


Problem Solving Process:

1. understand the quadratic equation.
2. identify and isolate the discriminant of the equation.
3. Ask user for integer values for variables a, b, and c.
4. plug in a, b, and c into discriminant.
5. There are three potential solutions:
    1. if discriminant > 0, then the roots are real and different (two real solutions).
    2. if discriminant == 0, then the roots are real and equal (one real solution).
    3. if discriminant < 0, then the root is complex and different (two complex solutions).
6. We can then test our computed discriminant against these three cases.