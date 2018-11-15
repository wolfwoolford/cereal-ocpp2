#pragma once

/**
*
* This file is auto generated using this exact command:
*     ../../generator/scripts/schema-to-cpp-header2.py
*     --input-dir=../../schemas/schemas
*     --namespace=lgpl3
*     --namespace=ocpp20
*     --include=<cereal/types/vector.hpp>
*     --include="../cereal/cereal_ext.hpp"
*     --include="../cereal/schema_enum.hpp"
*     --include="../cereal/schema_string.hpp"
*
*/

#include <cereal/types/vector.hpp>
#include "../cereal/cereal_ext.hpp"
#include "../cereal/schema_enum.hpp"
#include "../cereal/schema_string.hpp"
#include <vector>
#include "./common.hpp"

namespace lgpl3 { namespace ocpp20 { 

struct BootNotificationResponse
{
    SCHEMA_ENUM(StatusType,\
        Accepted,\
        Pending,\
        Rejected);
    using StatusTypeEnum=schema_enum_value<StatusType>;

    date_time currentTime;
    int interval;
    StatusTypeEnum status;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "currentTime", currentTime);
        cereal::nvp(archive, "interval", interval);
        cereal::nvp(archive, "status", status);
    }
};



} } 
