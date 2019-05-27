#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain
{
    public:
        Blockchain(uint32_t difficulty);
        void addBlock(Block bNew);

    private:
        uint32_t _nDifficulty;
        vector<Block> _vChain;
        Block getLastBlock() const;
};

#endif // BLOCKCHAIN_H
