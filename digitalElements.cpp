#include <iostream>
#include <vector>
class DigitalElements
{
public:
	virtual void out()=0;
};
class Counters : public DigitalElements
{
};
class BinaryCounter : public Counters
{
	void out()
	{
		std::cout << " Binary counters implement the counting of input impulses in the binary number system\n";
	}

};
class BinaryDecCounter : public Counters
{
	void out()
	{
		std::cout << " Binary coded decimal  is a serial digital counter that counts ten digits\n"; 
	}
};
class ReversiveCounter : public Counters
{
	void out()
	{
		std::cout << " A counter is a sequential circuit capable of counting the number of clock pulses that have arrived at its clock input\n";
	}
};
class Multiplexer : public DigitalElements
{
	void out()
	{
		std::cout << " Multiplexer is a device that can receive multiple input signals and synthesize a single output signal in a recoverable manner for each input signal\n";
	}
};
class Triggers : public DigitalElements
{
};
class DTrigger : public Triggers
{
	void out()
	{
		std::cout << " The counter consists of D-flip-flops\n";
	}
};
class RSTrigger : public Triggers
{
	void out()
	{
		std::cout << " The counter consists of RS-flip-flops\n";
	}
};
class ShiftRegister : public DigitalElements
{
	void out()
	{
		std::cout << " Shift registers are digital memory circuitry found in devices such as calculators, computers, and data processing systems\n";
	}
};

int main()
{
	DTrigger* DTr = new DTrigger;
	RSTrigger* RSTr = new RSTrigger;
	BinaryCounter* biCount = new BinaryCounter;
	BinaryDecCounter* biDecCount = new BinaryDecCounter;
	ReversiveCounter* reversCount = new ReversiveCounter;
	ShiftRegister* shiftReg = new ShiftRegister;
	Multiplexer* mult = new Multiplexer;
	std::vector <DigitalElements*> arr;
	arr.insert(arr.end(), { biCount, DTr, biDecCount, RSTr, reversCount, shiftReg, mult });
	for (const auto& a : arr)
	{
		a->out();
	}
	return 0;

}