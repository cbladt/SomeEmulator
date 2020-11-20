#pragma once
#include <CpuRegisters.hpp>
#include <Bus.hpp>

namespace SixFiveOhTwo::Tasks
{    
    class Reset
    {
    public:        
        Reset(CpuRegisters& cpuRegisters, Bus& bus);
        ~Reset() = default;

        Reset(const Reset&) = delete;
        Reset& operator=(const Reset&) = delete;

        Reset(Reset&&) = delete;
        Reset& operator=(Reset&&) = delete;

        void ClockEvent();

    private:
        CpuRegisters& _cpuRegisters;
        Bus& _bus;
    };
}
