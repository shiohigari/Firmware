#include "factory_addresses.hpp"

namespace BT
{

const Address6
factory_addresses[] = {
//	Address6(0x00, 0x16, 0xa4, 0x06, 0x79, 0x9f), // DevBoard
//	Address6(0x00, 0x16, 0xa4, 0x06, 0x79, 0xe0), // I
	Address6(0x00, 0x16, 0xa4, 0x06, 0x7f, 0xbc), // II
	Address6(0x00, 0x16, 0xa4, 0x06, 0x7e, 0xfc), // III
	Address6(0x00, 0x16, 0xa4, 0x06, 0x7f, 0xd0), // IV
//	Address6(0x00, 0x16, 0xa4, 0x09, 0x34, 0x89), // A
	Address6(0x00, 0x16, 0xa4, 0x09, 0x34, 0x8b), // B
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0x6e), // LeashBoard #12
	Address6(0x00, 0x16, 0xa4, 0x09, 0x34, 0xbb), // LeashBoard #13
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xe0), // LeashBoard #14
	Address6(0x00, 0x16, 0xa4, 0x09, 0x34, 0xbd), // LeashBoard #15
	Address6(0x00, 0x16, 0xa4, 0x09, 0x34, 0xbc), // LeashBoard #16
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0x7d), // AirDogBOT #19
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xf4), // AirDogBOT #20
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xf2), // AirDogBOT #21
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0x74), // AirDogBOT #22
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xc7), // AirDogBOT #23
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0x79), // AirRBT #1 FMU #22
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xe6), // AirRBT #2
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xfa), // AirDogBOT #24 v6
	Address6(0x00, 0x16, 0xa4, 0x06, 0x78, 0xed), // AirDogBOT #26 v6
};

const unsigned
n_factory_addresses = sizeof factory_addresses / sizeof *factory_addresses;

}
// end of namespace BT
