//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

#pragma once

class JITTimePolymorphicInlineCacheInfo
{
public:
    JITTimePolymorphicInlineCacheInfo();

    static void InitializeEntryPointPolymorphicInlineCacheInfo(
        __in Recycler * recycler,
        __in Js::FunctionCodeGenJitTimeData* jitTimeData,
        __in Js::EntryPointPolymorphicInlineCacheInfo * runtimeInfo,
        __inout EntryPointPolymorphicInlineCacheInfoIDL * jitInfo);

    JITTimePolymorphicInlineCache * GetInlineCache(uint index) const;
    bool HasInlineCaches() const;
    byte GetUtil(uint index) const;

private:

    static void InitializePolymorphicInlineCacheInfo(
        __in Recycler * recycler,
        __in Js::PolymorphicInlineCacheInfo * runtimeInfo,
        __inout PolymorphicInlineCacheInfoIDL * jitInfo);

    PolymorphicInlineCacheInfoIDL m_data;
};
