#pragma once

namespace number_theory {

	/// <summary>
	/// return [number] in power of [step]
	/// </summary>
	/// <param name="number"></param>
	/// <param name="step"></param>
	/// <returns></returns>
	int binpow(int number, int step) {
		if (step == 0)
			return 1;

		if (step % 2)
			return number * binpow(number, step - 1);

		return binpow(number * number, step / 2);
	}
}