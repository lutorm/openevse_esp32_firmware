#ifndef _OPENEVSE_SNTP_H
#define _OPENEVSE_SNTP_H

extern void sntp_begin(const char *host);
extern void sntp_loop();
extern void sntp_check_now();

#endif // _OPENEVSE_SNTP_H
