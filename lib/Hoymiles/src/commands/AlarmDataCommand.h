#pragma once

#include "MultiDataCommand.h"

class AlarmDataCommand : public MultiDataCommand {
public:
    AlarmDataCommand(uint64_t target_address = 0, uint64_t router_address = 0, time_t time = 0);

    virtual bool handleResponse(InverterAbstract* inverter, fragment_t fragment[], uint8_t max_fragment_id);
};