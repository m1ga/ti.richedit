/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf -L C++ -E -t /tmp/miga/ti.richedit-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/tmp/miga/ti.richedit-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.miga.richedit.RicheditViewProxy.h"
#include "com.miga.richedit.TiRicheditModule.h"


#line 14 "/tmp/miga/ti.richedit-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 2, duplicates = 0 */

class TiRicheditBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TiRicheditBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TiRicheditBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 34,
      MAX_WORD_LENGTH = 35,
      MIN_HASH_VALUE = 34,
      MAX_HASH_VALUE = 35
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/tmp/miga/ti.richedit-generated/KrollGeneratedBindings.gperf"
      {"com.miga.richedit.TiRicheditModule", ::com::miga::richedit::TiRicheditModule::bindProxy, ::com::miga::richedit::TiRicheditModule::dispose},
#line 16 "/tmp/miga/ti.richedit-generated/KrollGeneratedBindings.gperf"
      {"com.miga.richedit.RicheditViewProxy", ::com::miga::richedit::tirichedit::RicheditViewProxy::bindProxy, ::com::miga::richedit::tirichedit::RicheditViewProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/tmp/miga/ti.richedit-generated/KrollGeneratedBindings.gperf"

