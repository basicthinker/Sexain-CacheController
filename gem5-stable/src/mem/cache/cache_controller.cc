// cache_controller.cc
// Copyright (c) 2014 Jinglei Ren <jinglei@ren.systems>

#include "mem/cache/cache_controller.h"

void CacheController::DirtyBlock(uint64_t addr, int size) {
  /*
  assert(blocks_.size() <= att_length_ && pages_.size() <= ptt_length_);
  uint64_t begin = addr & ~block_mask();
  uint64_t end = (addr + size - 1) & ~block_mask();
  for (uint64_t a = begin; a <= end; a += block_size()) {
    if (a < dram_size_) {
      uint64_t page = a & ~page_mask();
      if (pages_.size() == ptt_length_ && pages_.find(page) == pages_.end()) {
        Flush();
      }
      ++pages_[page];
    } else {
      if (blocks_.size() == att_length_ && blocks_.find(a) == blocks_.end()) {
        Flush();
      }
      ++blocks_[a];
    }
  }
  */
}

CacheController* CacheControllerParams::create() {
  return new CacheController(this);
}

