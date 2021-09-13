// Copyright 2021 University of Adelaide
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "CmdPipeline.h"
#include "PImpl.h"
struct cp_dynlib_priv_t;

class cp_dynlib_t : public cmd_pipeline_t
{
public:
    cp_dynlib_t();
    void init(const traceinfo_t *traceinfo, pwtermset_mode_t mode) override;
    void init(const char* filename) override;
    void process() override;
    void process(const trace_t* trace) override;
    void finit() override;
    ~cp_dynlib_t() override;
private:
    PImpl<cp_dynlib_priv_t> pimpl;
};
