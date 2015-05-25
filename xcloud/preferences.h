#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QString>

class Preferences {
public:
    static void load();
    static void save();

    static int main_x;
    static int main_y;
    static int main_wid;
    static int main_hght;
    static int col_name_wid;
    static int col_stat_wid;
    static int col_upro_wid;
    static int col_rpro_wid;
    static int col_dpro_wid;
    static int col_trsp_wid;
    static int col_chec_wid;
    static int col_host_wid;
    static int col_outp_wid;

    static bool auto_run;

    static QString installed_3dsmax;
    static QString installed_maya;

private:
    Preferences();
};

#endif // PREFERENCES_H
