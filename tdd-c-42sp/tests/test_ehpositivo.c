#include "./minunit.h"

int	ehpositivo(int nbr);

MU_TEST(meu_primeiro_teste)
{
	// Given
	int	out = 10;
	int	expectation = 1;
	int	ret;

	// When
	ret = ehpositivo(out);
	
	// Then
	mu_assert_int_eq(expectation, ret);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(meu_primeiro_teste);
}

int	main(int argc, char **argv)
{
	MU_TEST_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}

