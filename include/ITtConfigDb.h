#ifndef ITTCONFIGDB_H_PYC4MSWD
#define ITTCONFIGDB_H_PYC4MSWD

class ITtConfigDb
{
public:
    ITtConfigDb() = default;
    virtual ~ITtConfigDb() = default;

    virtual void readInt(const char *name, int *value) = 0;
    virtual void readTyped(const char *name,
                                  void *data, unsigned int size,
                                  unsigned int *length, unsigned int *type) = 0;
};


#endif /* end of include guard: ITTCONFIGDB_H_PYC4MSWD */
