#pragma once

/**
*
* This file is auto generated using this exact command:
*     ../../generator/20/schema-to-cpp-header2.py
*     --input-dir=../../schemas/201
*     --namespace=lgpl3
*     --namespace=ocpp201
*     --include=<cereal/types/vector.hpp>
*     --include="../cereal/cereal_ext.hpp"
*     --include="../cereal/schema_enum.hpp"
*     --include="../cereal/schema_string.hpp"
*     --include="../cereal/schema_array.hpp"
*     --include="../cereal/schema_date_time.hpp"
*
*/

#include "./common.hpp"

namespace lgpl3 { namespace ocpp201 { 

SCHEMA_ENUM(LogStatusEnum,\
    Accepted,\
    Rejected,\
    AcceptedCanceled);
using LogStatusEnumType=schema_enum_value<LogStatusEnum>;

struct GetLogResponse
{
    optional<CustomDataType> customData;
    optional<schema_string<255>> filename;
    LogStatusEnumType status;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "customData", customData);
        cereal::nvp(archive, "filename", filename);
        cereal::nvp(archive, "status", status);
    }
};



} } 

