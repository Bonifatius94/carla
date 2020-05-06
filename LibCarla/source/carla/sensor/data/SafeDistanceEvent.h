#pragma once

#include "carla/rpc/ActorId.h"
#include "carla/sensor/data/Array.h"

namespace carla {
    namespace sensor {
        namespace data {

            class SafeDistanceEvent : public Array<rpc::ActorId> {
                public:

                explicit SafeDistanceEvent(RawData &&data) : Array<rpc::ActorId>(std::move(data)) {}
            };

        }
    }
}