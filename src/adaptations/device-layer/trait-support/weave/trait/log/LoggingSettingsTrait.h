
/*
 *    Copyright (c) 2019 Google LLC.
 *    Copyright (c) 2016-2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/*
 *    THIS FILE IS GENERATED. DO NOT MODIFY.
 *
 *    SOURCE TEMPLATE: trait.cpp.h
 *    SOURCE PROTO: weave/trait/log/logging_settings_trait.proto
 *
 */
#ifndef _WEAVE_TRAIT_LOG__LOGGING_SETTINGS_TRAIT_H_
#define _WEAVE_TRAIT_LOG__LOGGING_SETTINGS_TRAIT_H_

#include <Weave/Profiles/data-management/DataManagement.h>
#include <Weave/Support/SerializationUtils.h>



namespace Schema {
namespace Weave {
namespace Trait {
namespace Log {
namespace LoggingSettingsTrait {

extern const nl::Weave::Profiles::DataManagement::TraitSchemaEngine TraitSchema;

enum {
      kWeaveProfileId = (0x0U << 16) | 0xa01U
};

//
// Properties
//

enum {
    kPropertyHandle_Root = 1,

    //---------------------------------------------------------------------------------------------------------------------------//
    //  Name                                IDL Type                            TLV Type           Optional?       Nullable?     //
    //---------------------------------------------------------------------------------------------------------------------------//

    //
    //  current_importance                  wdl.EventImportance                  int               NO              NO
    //
    kPropertyHandle_CurrentImportance = 2,

    //
    //  importance_expiration               google.protobuf.Timestamp            uint              NO              NO
    //
    kPropertyHandle_ImportanceExpiration = 3,

    //
    //  min_log_time                        google.protobuf.Duration             uint32 seconds    NO              NO
    //
    kPropertyHandle_MinLogTime = 4,

    //
    //  max_log_time                        google.protobuf.Duration             uint32 seconds    NO              NO
    //
    kPropertyHandle_MaxLogTime = 5,

    //
    //  trait_logging_importance            map <uint32,wdl.EventImportance>     map <uint32, int> NO              NO
    //
    kPropertyHandle_TraitLoggingImportance = 6,

    //
    //  value                               wdl.EventImportance                  int               NO              NO
    //
    kPropertyHandle_TraitLoggingImportance_Value = 7,

    //
    // Enum for last handle
    //
    kLastSchemaHandle = 7,
};

} // namespace LoggingSettingsTrait
} // namespace Log
} // namespace Trait
} // namespace Weave
} // namespace Schema
#endif // _WEAVE_TRAIT_LOG__LOGGING_SETTINGS_TRAIT_H_
