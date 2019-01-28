// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>

namespace CryptoNote {
namespace parameters {

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 43432;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                   = UINT64_C(1006744073709551615);
const size_t MIN_MIXIN                                        = 0;
const uint8_t MANDATORY_MIXIN_BLOCK_VERSION                   = 0;
const uint32_t MIXIN_START_HEIGHT                             = 0;
const uint32_t MANDATORY_TRANSACTION                          = 0;
const uint32_t KILL_HEIGHT                                    = 0;
const uint64_t TAIL_EMISSION_REWARD                           = 0;
const size_t CRYPTONOTE_COIN_VERSION                          = 0;
const uint32_t ZAWY_DIFFICULTY_BLOCK_INDEX                    = 30;
const uint32_t ZAWY_DIFFICULTY_LAST_BLOCK                     = 0;
const uint64_t ZAWY_DIFFICULTY_MIN                            = 100000;
const uint32_t ZAWY_LWMA_DIFFICULTY_BLOCK_INDEX               = 0;
const uint32_t ZAWY_LWMA_DIFFICULTY_LAST_BLOCK                = 0;
const uint64_t ZAWY_LWMA_DIFFICULTY_MIN                       = 0;
const size_t ZAWY_LWMA_DIFFICULTY_N                           = 0;
const uint32_t ZAWY_LWMA2_DIFFICULTY_BLOCK_INDEX              = 0;
const uint32_t ZAWY_LWMA2_DIFFICULTY_LAST_BLOCK               = 0;
const uint64_t ZAWY_LWMA2_DIFFICULTY_MIN                      = 100000;
const size_t ZAWY_LWMA2_DIFFICULTY_N                          = 0;
const uint32_t BUGGED_ZAWY_DIFFICULTY_BLOCK_INDEX             = 0;
const unsigned EMISSION_SPEED_FACTOR                          = 18;
const uint64_t GENESIS_BLOCK_REWARD                           = UINT64_C(201348814741910340);
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 100000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 10;
const uint64_t MINIMUM_FEE                                   = UINT64_C(100000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(100000);
// Use 0 for default max transaction size limit
const uint64_t MAX_TRANSACTION_SIZE_LIMIT                    = 100000;
const uint64_t DEFAULT_FEE                          = MINIMUM_FEE;

const uint64_t DIFFICULTY_TARGET                             = 120; // seconds
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = 17; // blocks
const size_t   DIFFICULTY_WINDOW_V1                          = 720;
const size_t   DIFFICULTY_WINDOW_V2                          = 720;
const size_t   DIFFICULTY_CUT                                = 0;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1                             = 60;
const size_t   DIFFICULTY_CUT_V2                             = 60;
const size_t   DIFFICULTY_LAG                                = 0;  // !!!
const size_t   DIFFICULTY_LAG_V1                             = 15;
const size_t   DIFFICULTY_LAG_V2                             = 15;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                             = 1;
const uint32_t UPGRADE_HEIGHT_V3                             = 30;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.bin";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.bin";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "videogamescoin";

const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  100;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  32307;
const int      RPC_DEFAULT_PORT                              =  32308;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 64 * 1024 * 1024; // 64 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds

const uint32_t  P2P_FAILED_ADDR_FORGET_SECONDS               = (60*60);     //1 hour
const uint32_t  P2P_IP_BLOCKTIME                             = (60*60*24);  //24 hour
const uint32_t  P2P_IP_FAILS_BEFORE_BLOCK                    = 10;
const uint32_t  P2P_IDLE_CONNECTION_KILL_INTERVAL            = (5*60); //5 minutes

const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const char* const SEED_NODES[] = { "142.93.142.77:32307", "104.248.123.116:32307" };


struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
  { 1000, "29b4dc4ecef3979410a7610a27d92ac69760a5c52225fcdc61b8664d50a3de04" },
  { 2000, "936b88c622c768b35c33cb6b898ccfd8223ade131bb3134702c7d0a150c2d96e" },
  { 3000, "4a11397b00aad94b7f7ad7d1a513c4d8a2bec1bffc9dd8f3b95dcaa99d2c87b0" },
  { 4000, "5d1d0c7433a0477196051f1c00a66d8f978455814f93c7faa8dd40e882ad1d9a" },
  { 5000, "a40f9f4eee78f5b6c25f7d573fbfdcb6c4a7965661bcb5cb1ffc4c9a65e170ec" },
  { 6000, "a907806bdbccdfde59df26a2bf484ca8a2c13be07343ebb5f0e3cb07be2179f9" },
  { 7000, "c77e386b50e9998b80cc39a7087c72adface282fb7e3c048ce7ca3517891255a" },
  { 8000, "e095e9cac5e32107e020c92f8e8182a212432f36fe24cfa097fb7ad38cf73329" },
  { 9000, "878d6dbbe28d0515d9b16027ff1a0f3e730817180b625534866910e598804b06" },
  { 10000, "1e5311e6920b5b632cda6fb1559d2ff7305e38d1494e8357f3c526d7f460df03"},
  { 20000, "9f3e220e8ce250f3795c279b52527ac768210d255109af077e1064035088d181"},
  { 30000, "5c81ff0f813de9abbe2f579b4d17291032fbb67338899faed11517fa0b3234a2"},
  { 40000, "3991138ee7c9648472724d47f105e7b3de151db091d417ef891ff1ac874254f0"},
  { 50000, "e19a8046cd066db25b680de4eecb036dabbf193070f850dd69571dd8e51a1600"},
  { 55000, "aba63544807133c52415fb480d7dc5fb9a4c178ada4f16dcc1cdcc07c038bf34"},
  { 60000, "26d547a10448743842816e385230ee051a936d8874a3d383ba913c0e087be662"},
  { 68000, "18edeeb3ed70723e8e11908a77a5536b7ebd348faad1087a20d0892308c8760f"}

};

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS



