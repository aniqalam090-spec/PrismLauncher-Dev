// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PakClient - Crescent White Theme
 *  Copyright (C) 2026 Aniq Alam
 */
#include "PakClientWhiteTheme.h"

#include <QObject>

QString PakClientWhiteTheme::id()
{
    return "pakclient_white";
}

QString PakClientWhiteTheme::name()
{
    return QObject::tr("PakClient Crescent White");
}

QString PakClientWhiteTheme::tooltip()
{
    return QObject::tr("Frosted Glass White & Emerald Crescent Theme by Aniq Alam");
}

bool PakClientWhiteTheme::hasStyleSheet()
{
    return true;
}

double PakClientWhiteTheme::fadeAmount()
{
    return 0.5;
}

QColor PakClientWhiteTheme::fadeColor()
{
    return QColor(245, 248, 245);
}

QPalette PakClientWhiteTheme::colorScheme()
{
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(245, 248, 245));
    palette.setColor(QPalette::WindowText, QColor(10, 40, 20));
    palette.setColor(QPalette::Base, QColor(255, 255, 255));
    palette.setColor(QPalette::AlternateBase, QColor(235, 242, 236));
    palette.setColor(QPalette::ToolTipBase, QColor(255, 255, 255));
    palette.setColor(QPalette::ToolTipText, QColor(10, 40, 20));
    palette.setColor(QPalette::Text, QColor(10, 40, 20));
    palette.setColor(QPalette::Button, QColor(230, 240, 232));
    palette.setColor(QPalette::ButtonText, QColor(10, 40, 20));
    palette.setColor(QPalette::BrightText, QColor(0, 160, 60));
    palette.setColor(QPalette::Link, QColor(0, 120, 50));
    palette.setColor(QPalette::Highlight, QColor(0, 160, 65));
    palette.setColor(QPalette::HighlightedText, QColor(255, 255, 255));
    palette.setColor(QPalette::PlaceholderText, QColor(120, 150, 130));
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QString PakClientWhiteTheme::appStyleSheet()
{
    return QStringLiteral(
        "QMainWindow, QDialog, QWizard {\n"
        "    background-color: #f5f8f5;\n"
        "    color: #0d2e16;\n"
        "}\n"
        "QWidget#centralWidget, QStackedWidget {\n"
        "    background: transparent;\n"
        "}\n"
        "QToolBar#mainToolBar {\n"
        "    background: #eaf1ec;\n"
        "    border: none;\n"
        "    border-right: 1px solid rgba(0, 160, 60, 0.20);\n"
        "    spacing: 6px;\n"
        "    padding: 8px 6px;\n"
        "    min-width: 195px;\n"
        "    max-width: 220px;\n"
        "}\n"
        "QToolBar#mainToolBar QToolButton {\n"
        "    min-height: 38px;\n"
        "    padding: 7px 12px;\n"
        "    border-radius: 8px;\n"
        "    text-align: left;\n"
        "    font-size: 13px;\n"
        "    font-weight: 600;\n"
        "    margin: 2px 4px;\n"
        "    background: rgba(0, 160, 60, 0.05);\n"
        "    border: 1px solid rgba(0, 160, 60, 0.15);\n"
        "    color: #0d2e16;\n"
        "}\n"
        "QToolBar#mainToolBar QToolButton:hover {\n"
        "    background: rgba(0, 160, 60, 0.15);\n"
        "    border: 1px solid #00a03c;\n"
        "    color: #000000;\n"
        "}\n"
        "QToolBar#mainToolBar QToolButton[defaultAction=\"actionAddInstance\"],\n"
        "QToolBar#mainToolBar QToolButton#actionAddInstance {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #00a03c, stop:1 #008030);\n"
        "    border: 1px solid #00a03c;\n"
        "    color: #ffffff;\n"
        "    font-weight: 700;\n"
        "}\n"
        "QToolBar#instanceToolBar {\n"
        "    background: #edf3ee;\n"
        "    border: none;\n"
        "    border-top: 1px solid rgba(0, 160, 60, 0.20);\n"
        "    spacing: 8px;\n"
        "    padding: 6px 16px;\n"
        "    min-height: 60px;\n"
        "}\n"
        "QToolButton[defaultAction=\"actionLaunchInstance\"], QToolButton#actionLaunchInstance {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #00a03c, stop:1 #007028);\n"
        "    color: #ffffff;\n"
        "    font-weight: 900;\n"
        "    border: 1px solid #00a03c;\n"
        "    border-radius: 9px;\n"
        "    padding: 9px 24px;\n"
        "    font-size: 14px;\n"
        "}\n"
        "QToolButton[defaultAction=\"actionLaunchInstance\"]:hover, QToolButton#actionLaunchInstance:hover {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #00c74b, stop:1 #00a03c);\n"
        "    border: 1px solid #005018;\n"
        "}\n"
        "QListView, QTreeView, QTableView {\n"
        "    background: #ffffff;\n"
        "    border: 1px solid rgba(0, 160, 60, 0.20);\n"
        "    border-radius: 12px;\n"
        "    color: #0d2e16;\n"
        "    selection-background-color: rgba(0, 160, 60, 0.25);\n"
        "    selection-color: #000000;\n"
        "}\n"
        "QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QComboBox {\n"
        "    background: #ffffff;\n"
        "    border: 1px solid rgba(0, 160, 60, 0.25);\n"
        "    border-radius: 7px;\n"
        "    padding: 6px 10px;\n"
        "    color: #0d2e16;\n"
        "}\n"
        "QMenuBar {\n"
        "    background: #f5f8f5;\n"
        "    color: #0d2e16;\n"
        "    border-bottom: 1px solid rgba(0, 160, 60, 0.15);\n"
        "}\n"
        "QStatusBar {\n"
        "    background: #edf3ee;\n"
        "    border-top: 1px solid rgba(0, 160, 60, 0.15);\n"
        "    color: #3b6645;\n"
        "}\n"
    );
}
