/*
 * Definition einer globalen Struktur FindConfig g_cfg und Deklaration von init_environment(), init_config(), save_config(), config_cleanup().
 *
 */
#ifndef CONFIG_H
#define CONFIG_H

#include <glib.h>

/* ----- Globale Struktur um Konfigurations-Parameter zu kapseln ------------ */
typedef struct {
    gboolean miniterm_enable; // true/false
    gboolean use_tmux;        // true/false
} FindConfig;

/* ----- Globale Instanz ----- */
extern FindConfig g_cfg;


/* ----- Funktionen, die von außen aufgerufen werden ----------------------- */
void init_environment (void);   // Pfade ermitteln
void init_config      (void);   // Datei anlegen / laden g_cfg befüllen
void save_config      (void);   // g_cfg Datei schreiben
void config_cleanup   (void);   // Aufräumen

const gchar *get_app_dir (void);

#endif //CONFIG_H
