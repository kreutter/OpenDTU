#pragma once

#include "HM_Abstract.h"

class HM_1CH : public HM_Abstract {
public:
    HM_1CH(uint64_t serial);
    static bool isValidSerial(uint64_t serial);
    String typeName();
    const byteAssign_t* getByteAssignment();
    const uint8_t getAssignmentCount();

private:
    const byteAssign_t byteAssignment[17] = {
        { FLD_UDC, UNIT_V, CH1, 2, 2, 10 },
        { FLD_IDC, UNIT_A, CH1, 4, 2, 100 },
        { FLD_PDC, UNIT_W, CH1, 6, 2, 10 },
        { FLD_YD, UNIT_WH, CH1, 12, 2, 1 },
        { FLD_YT, UNIT_KWH, CH1, 8, 4, 1000 },
        { FLD_IRR, UNIT_PCT, CH1, CALC_IRR_CH, CH1, CMD_CALC },

        { FLD_UAC, UNIT_V, CH0, 14, 2, 10 },
        { FLD_IAC, UNIT_A, CH0, 22, 2, 100 },
        { FLD_PAC, UNIT_W, CH0, 18, 2, 10 },
        { FLD_PRA, UNIT_VA, CH0, 20, 2, 10 },
        { FLD_F, UNIT_HZ, CH0, 16, 2, 100 },
        { FLD_T, UNIT_C, CH0, 26, 2, 10 },
        { FLD_EVT_LOG, UNIT_CNT, CH0, 24, 2, 1 },
        { FLD_YD, UNIT_WH, CH0, CALC_YD_CH0, 0, CMD_CALC },
        { FLD_YT, UNIT_KWH, CH0, CALC_YT_CH0, 0, CMD_CALC },
        { FLD_PDC, UNIT_W, CH0, CALC_PDC_CH0, 0, CMD_CALC },
        { FLD_EFF, UNIT_PCT, CH0, CALC_EFF_CH0, 0, CMD_CALC }
    };
};