#pragma once

namespace SixFiveOhTwo::Opcodes::ASLMEM
{
	namespace _private
	{
		#include "ASLMEM.impl.hpp"
	}

	static const constexpr auto ZeroPageOpCode = 6;
	template <typename Cpu, typename Ram, typename Cycles>
	void ZeroPage(Cpu& cpu, Ram& ram, Cycles cycles)
	{

		AddressingModes::ZeroPage::NoOffset(cpu, ram);
		auto value = ram.Read(cpu.Temp);
		_private::ASLMEM(cpu, value, cycles);

	}

	static const constexpr auto AbsoluteOpCode = 14;
	template <typename Cpu, typename Ram, typename Cycles>
	void Absolute(Cpu& cpu, Ram& ram, Cycles cycles)
	{

		AddressingModes::Absolute::NoOffset(cpu, ram);
		auto value = ram.Read(cpu.Temp);
		_private::ASLMEM(cpu, value, cycles);

	}

	static const constexpr auto ZeroPageXOffsetOpCode = 22;
	template <typename Cpu, typename Ram, typename Cycles>
	void ZeroPageXOffset(Cpu& cpu, Ram& ram, Cycles cycles)
	{

		AddressingModes::ZeroPage::XOffset(cpu, ram);
		auto value = ram.Read(cpu.Temp);
		_private::ASLMEM(cpu, value, cycles);

	}

	static const constexpr auto AbsoluteXOffsetOpCode = 30;
	template <typename Cpu, typename Ram, typename Cycles>
	void AbsoluteXOffset(Cpu& cpu, Ram& ram, Cycles cycles)
	{

		AddressingModes::Absolute::XOffset(cpu, ram);
		auto value = ram.Read(cpu.Temp);
		_private::ASLMEM(cpu, value, cycles);

	}

}

