namespace number_theory {
	template<typename A, typename B>
	A binpow(A number, B step) {
		if (step == 0)
			return 1;

		if (step % 2)
			return number * binpow(number, step - 1);

		return binpow(number * number, step / 2);
	}


	template<typename A, typename B, typename C>
	A binpowmod(A number, B step, C mod) {
		if (step == 0)
			return 1;

		if (step % 2)
			return (number * binpow(number, step - 1)) % mod;

		return binpow((number * number % mod), step / 2);
	}
}