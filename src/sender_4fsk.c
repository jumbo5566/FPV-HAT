#include <stdlib.h>
#include "si4463.h"

#include "radio_config_4fsk_tx.h"
#include "packet_config.h"

size_t packet_size_4fsk_tx()
{
    return PACKET_SIZE;
}


int load_4fsk_config_tx(si4463_t si)
{
    U8 radio_config[] = RADIO_CONFIGURATION_DATA_ARRAY;
    int cmds = SI4463_reset_with_cfg(si, radio_config);

    return cmds;
}
