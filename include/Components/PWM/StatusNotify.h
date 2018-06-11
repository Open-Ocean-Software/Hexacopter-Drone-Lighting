
#ifndef C_STATUSNOTIFY_H
#define C_STATUSNOTIFY_H

#define DDR_NOTIFY_STATUSR
#define PORT_NOTIFY_STATUSR
#define MASK_NOTIFY_STATUSR
#define HANDLER_NOTIFY_STATUSR &Handler_NotifyStatusR

void Handler_NotifyStatusR (struct PWMComponent comp, unsigned char t);


#define DDR_NOTIFY_STATUSG
#define PORT_NOTIFY_STATUSG
#define MASK_NOTIFY_STATUSG
#define HANDLER_NOTIFY_STATUSG &Handler_NotifyStatusG

void Handler_NotifyStatusG (struct PWMComponent comp, unsigned char t);


#define DDR_NOTIFY_STATUSB
#define PORT_NOTIFY_STATUSB
#define MASK_NOTIFY_STATUSB
#define HANDLER_NOTIFY_STATUSB &Handler_NotifyStatusB

void Handler_NotifyStatusB (struct PWMComponent comp, unsigned char t);

#endif
