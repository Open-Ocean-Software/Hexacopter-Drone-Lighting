
#ifndef C_STATUSNOTIFY_H
#define C_STATUSNOTIFY_H

#define DDR_NOTIFY_STATUSR DDRC
#define PORT_NOTIFY_STATUSR PORTC
#define MASK_NOTIFY_STATUSR (1 << PC0)
#define HANDLER_NOTIFY_STATUSR Handler_NotifyStatus


#define DDR_NOTIFY_STATUSG DDRC
#define PORT_NOTIFY_STATUSG PORTC
#define MASK_NOTIFY_STATUSG (1 << PC1)
#define HANDLER_NOTIFY_STATUSG Handler_NotifyStatus


#define DDR_NOTIFY_STATUSB DDRC
#define PORT_NOTIFY_STATUSB PORTC
#define MASK_NOTIFY_STATUSB (1 << PC2)
#define HANDLER_NOTIFY_STATUSB Handler_NotifyStatus



void Handler_NotifyStatus (struct Component *comp, unsigned char t);

#endif
