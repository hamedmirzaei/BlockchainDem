#include "Blockchain.h"

Blockchain::Blockchain(uint32_t difficulty) {
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = difficulty;
}

void Blockchain::addBlock(Block bNew) {
    bNew.sPrevHash = getLastBlock().getHash();
    bNew.mineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::getLastBlock() const {
    return _vChain.back();
}
