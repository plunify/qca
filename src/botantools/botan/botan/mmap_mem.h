/*
Copyright (C) 1999-2007 The Botan Project. All rights reserved.

Redistribution and use in source and binary forms, for any use, with or without
modification, is permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions, and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions, and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ARE DISCLAIMED.

IN NO EVENT SHALL THE AUTHOR(S) OR CONTRIBUTOR(S) BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
// LICENSEHEADER_END
namespace QCA { // WRAPNS_LINE
/*************************************************
* Memory Mapping Allocator Header File           *
* (C) 1999-2007 The Botan Project                *
*************************************************/

#ifndef BOTAN_EXT_MMAP_ALLOCATOR_H__
#define BOTAN_EXT_MMAP_ALLOCATOR_H__

} // WRAPNS_LINE
#include <botan/mem_pool.h>
namespace QCA { // WRAPNS_LINE

namespace Botan {

/*************************************************
* Memory Mapping Allocator                       *
*************************************************/
class MemoryMapping_Allocator : public Pooling_Allocator
   {
   public:
      MemoryMapping_Allocator() : Pooling_Allocator(64*1024, false) {}
      std::string type() const override { return "mmap"; }
   private:
      void* alloc_block(u32bit) override;
      void dealloc_block(void*, u32bit) override;
   };

}

#endif
} // WRAPNS_LINE
