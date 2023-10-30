

#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main()
{
  /* Setting the i18n environment */  /* internationalization */
  setlocale (LC_ALL, "");    /* there is underscore here */
  bindtextdomain ("gettextEG", getenv("PWD") );  // "/usr/share/locale/fr/LC_MESSAGES/"
  textdomain ("gettextEG");

  /* Example of i18n usage */
  /* afaik the language in to which strings are to be translated is NOT mentioned */
  printf(_("Hello World\n"));
  printf(_("The first 10 numbers are\n"));
  printf(_("one\n"));
  printf(_("two\n"));

  return EXIT_SUCCESS;
}
