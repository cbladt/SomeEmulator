#pragma once
#include <cstdint>
#include <array>

static constexpr const size_t RamSize = 0x2000;

class Ram
{
public:
    constexpr Ram() :
        _data({0})
    {};
    ~Ram() = default;

    constexpr Ram(const Ram&) = delete;
    constexpr Ram& operator=(const Ram&) = delete;

    constexpr Ram(Ram&&) = delete;
    constexpr Ram& operator=(Ram&&) = delete;

    uint8_t Read(uint16_t address)
    {
        return _data.at(address);
    }

    void Write(uint16_t address, uint8_t data)
    {
        _data.at(address) = data;
    }

private:
    std::array<uint8_t, RamSize> _data;
};
