
#ifndef _USER_MAIN_H_
#define _USER_MAIN_H_

#ifndef SPDIF_RX
void genclock();

#define USER_MAIN_CORES \
    on tile[1] : genclock();

#endif
#endif
