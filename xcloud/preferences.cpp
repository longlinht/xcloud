#include "preferences.h"
#include "paths.h"
#include <QSettings>

int Preferences::main_x = 0;
int Preferences::main_y = 0;
int Preferences::main_wid = 0;
int Preferences::main_hght = 0;
int Preferences::col_name_wid = 0;
int Preferences::col_stat_wid = 0;
int Preferences::col_upro_wid = 0;
int Preferences::col_rpro_wid = 0;
int Preferences::col_dpro_wid = 0;
int Preferences::col_trsp_wid = 0;
int Preferences::col_chec_wid = 0;
int Preferences::col_host_wid = 0;
int Preferences::col_outp_wid = 0;
bool Preferences::auto_run = false;
QString Preferences::installed_3dsmax;
QString Preferences::installed_maya;


void Preferences::save(){
    QString iniPath = Paths::configPath();
    QSettings settings(iniPath,QSettings::IniFormat);

    settings.beginGroup("UI");
    settings.setValue("main_x",main_x);
    settings.setValue("main_y",main_y);
    settings.setValue("main_wid",main_wid);
    settings.setValue("col_name_wid",main_hght);
    settings.setValue("col_name_wid",col_name_wid);
    settings.setValue("col_stat_wid",col_stat_wid);
    settings.setValue("col_upro_wid",col_upro_wid);
    settings.setValue("col_rpro_wid",col_rpro_wid);
    settings.setValue("col_dpro_wid",col_dpro_wid);
    settings.setValue("col_trsp_wid",col_trsp_wid);
    settings.setValue("col_chec_wid",col_chec_wid);
    settings.setValue("col_host_wid",col_host_wid);
    settings.setValue("col_outp_wid",col_outp_wid);
    settings.endGroup();

    settings.beginGroup("Application");
    settings.setValue("auto_run",auto_run);
    settings.endGroup();

    settings.beginGroup("Plugin");
    settings.setValue("installed_3dsmax",installed_3dsmax);
    settings.setValue("installed_maya",installed_maya);
    settings.endGroup();
}

void Preferences::load(){
    QString iniPath = Paths::configPath();
    QSettings settings(iniPath,QSettings::IniFormat);

    if(!settings.contains("UI")) return;

    settings.beginGroup("UI");
    main_x = settings.value("main_x").toInt();
    main_y = settings.value("main_y").toInt();
    main_wid = settings.value("main_wid").toInt();
    main_hght = settings.value("main_hght").toInt();
    col_name_wid = settings.value("col_name_wid").toInt();
    col_stat_wid = settings.value("col_stat_wid").toInt();
    col_upro_wid = settings.value("col_upro_wid").toInt();
    col_rpro_wid = settings.value("col_rpro_wid").toInt();
    col_dpro_wid = settings.value("col_dpro_wid").toInt();
    col_trsp_wid = settings.value("col_trsp_wid").toInt();
    col_chec_wid = settings.value("col_chec_wid").toInt();
    col_host_wid = settings.value("col_host_wid").toInt();
    col_outp_wid = settings.value("col_outp_wid").toInt();
    settings.endGroup();

    settings.beginGroup("Application");
    auto_run = settings.value("auto_run").toBool();
    settings.endGroup();

    settings.beginGroup("Plugin");
    installed_3dsmax = settings.value("installed_3dsmax").toString();
    installed_maya = settings.value("installed_maya").toString();
    settings.endGroup();
}

