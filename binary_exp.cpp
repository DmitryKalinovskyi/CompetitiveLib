namespace number_theory {
	int binpow(int number, int step) {
		if (step == 0)
			return 1;

		if (step % 2)
			return number * binpow(number, step - 1);

		return binpow(number * number, step / 2);
	}

	int binpowmod(int number, int step, int mod) {
		if (step == 0)
			return 1;

		if (step % 2)
			return (number * binpow(number, step - 1)) % mod;

		return binpow((number *1ll* number % mod), step / 2);
	}
}