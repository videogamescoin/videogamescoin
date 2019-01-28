# videogamescoin

![VideoGamesCoin Logo](/vgc_logo.png)

Coin specifically designed for use with in Video Games to buy game assets
---
VideoGamesCoin is a cryptonote based coin specifically designed to use within Video Games.

It has same features like privacy, fungibility as other cryptonote based coins.

## Coin Specifications
* Ticker: VGC
* Max Supply: 100,000,000
* Emission Factor: 18
* Block Timing: 120 Seconds (2 min)

## Usage
VideoGamesCoin is a cryptonote-based coin compatible with [forknote](https://github.com/forknote/forknote).

A standalone GUI wallet is coing soon

## Run Node
1. Install required packages

videogamescoin>> sudo apt-get update

videogamescoin>> sudo apt-get install libboost-all-dev

videogamescoin>> sudo apt-get install build-essential cmake pkg-config libssl-dev libunbound-dev libminiupnpc-dev libunwind8-dev liblzma-dev libldns-dev libexpat1-dev libgtest-dev doxygen graphviz

2. Now get the code from git repository and build

videogamescoin>> git clone https://github.com/videogamescoin/videogamescoin.git vgcnode

videogamescoin>> cd vgcnode

videogamescoin>> make

3. Now you can run the node using the following command.

videogamescoin>> ./VGCd

## Run Simple Wallet
Run the simplewallet using the following command: 

videogamescoin>> ./simplewallet 

The Wallet will have prefix VEo.
