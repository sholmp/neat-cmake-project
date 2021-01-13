#include "ITtConfigDb.h"

class TtConfigDb : public ITtConfigDb
{
public:
    void readInt(const char *name, int *value) ;
    void readTyped(const char *name, void *data, unsigned int size,
                           unsigned int *length, unsigned int *type) ;
};
