// Copyright 2017 Korniakov Kirill

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Igor_Fedorov_ComplexNumberTest, Cant_divide_by_Zero) {
	double r = 15.023;
	double i = 97.193;
	ComplexNumber a(r, i);
	ComplexNumber b(r, i);
	ComplexNumber c = a - b;
	ComplexNumber d;
	EXPECT_ANY_THROW(d = c / d);
}
TEST(Igor_Fedorov_ComplexNumberTest, can_divide_by_1) {
	double r = 123;
	double i = 123;
	ComplexNumber a(1, 0);
	ComplexNumber b(r, i);
	ComplexNumber c = a / b;
	ComplexNumber d(r / (r*r +i*i ),-i/(r*r+i*i));
	EXPECT_EQ(c,d);
}
TEST(Igor_Fedorov_ComplexNumberTest, get_work_ok) {
	double r1 = 1;
	double i1 = 12;
	double r2 = 123;
	double i2 = 1234; 
	ComplexNumber a(r1, i1);
	ComplexNumber b(r2, i2);
	ComplexNumber c = a * b;
	ComplexNumber d(c.getRe, c.getIm);
	EXPECT_EQ(c , d);
}