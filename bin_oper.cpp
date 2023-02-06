//Binary system

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    cout << "Enter number from 0 - 255: ";
    unsigned short inputNum = 0;
    cin >> inputNum;

    bitset<8> inputBit(inputNum);
    cout << inputNum << " in binary system is " << inputBit << endl;

    bitset<8> BitWiseNOT = (~inputNum);
    cout << "Bit wise not ~ " << endl;
    cout << "~" << inputBit << " = " << BitWiseNOT << endl;

    cout << "Logical AND (&) with 00001111" << endl;
    bitset<8> BitwiseAND = (0x0F & inputNum); // 0x0F == 0001111
    cout << "0001111 & " << inputBit << " = " << BitwiseAND << endl;

    cout << "Logical OR (|) with 00001111" << endl;
    bitset<8> BitwiseOR = (0x0F | inputNum); 
    cout << "0001111 | " << inputBit << " = " << BitwiseOR << endl;

    cout << "Logical XOR (^) with 00001111" << endl;
    bitset<8> BitwiseXOR = (0x0F ^ inputNum);
    cout << "0001111 ^ " << inputBit << " = " << BitwiseXOR << endl;

    return 0;
}