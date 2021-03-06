#ifndef EID_H
#define EID_H

/*
 *  EID represents a temporary identifier of a shell's background process.
 *  Once a background process starts it gets its own unique EID long his life,
 *  as soon as the process ends any other process'll be able to get that EID.
 */

typedef int eid_t;

eid_t acquire_eid();
void release_eid(eid_t eid);

#endif /* !EID_H */
