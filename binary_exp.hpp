#pragma once

namespace number_theory {

	/// <summary>
	/// return [number] in power of [step]
	/// </summary>
	/// <param name="number"></param>
	/// <param name="step"></param>
	/// <returns></returns>
	int binpow(int number, int step);

	/// <summary>
	/// return [number] in power of [step] by modulo [mod]
	/// </summary>
	/// <param name="number"></param>
	/// <param name="step"></param>
	/// <returns></returns>
	int binpowmod(int number, int step, int mod);
}