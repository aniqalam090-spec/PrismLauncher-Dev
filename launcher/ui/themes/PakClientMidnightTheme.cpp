// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PakClient - Cyber Midnight OLED Theme
 *  Copyright (C) 2026 Aniq Alam
 */
#include "PakClientMidnightTheme.h"

#include <QObject>

QString PakClientMidnightTheme::id()
{
    return "pakclient_midnight";
}

QString PakClientMidnightTheme::name()
{
    return QObject::tr("PakClient Cyber Midnight");
}

QString PakClientMidnightTheme::tooltip()
{
    return QObject::tr("Deep OLED Black & Electric Neon Emerald Theme by Aniq Alam");
}

bool PakClientMidnightTheme::hasStyleSheet()
{
    return true;
}

double PakClientMidnightTheme::fadeAmount()
{
    return 0.5;
}

QColor PakClientMidnightTheme::fadeColor()
{
    return QColor(0, 0, 0);
}

QPalette PakClientMidnightTheme::colorScheme()
{
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(0, 0, 0));
    palette.setColor(QPalette::WindowText, QColor(240, 255, 245));
    palette.setColor(QPalette::Base, QColor(6, 8, 10));
    palette.setColor(QPalette::AlternateBase, QColor(12, 16, 20));
    palette.setColor(QPalette::ToolTipBase, QColor(5, 10, 8));
    palette.setColor(QPalette::ToolTipText, QColor(240, 255, 245));
    palette.setColor(QPalette::Text, QColor(240, 255, 245));
    palette.setColor(QPalette::Button, QColor(10, 18, 14));
    palette.setColor(QPalette::ButtonText, QColor(240, 255, 245));
    palette.setColor(QPalette::BrightText, QColor(0, 255, 136));
    palette.setColor(QPalette::Link, QColor(0, 240, 255));
    palette.setColor(QPalette::Highlight, QColor(0, 255, 136));
    palette.setColor(QPalette::HighlightedText, QColor(0, 0, 0));
    palette.setColor(QPalette::PlaceholderText, QColor(100, 130, 115));
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QString PakClientMidnightTheme::appStyleSheet()
{
    return QStringLiteral(
        "QMainWindow, QDialog, QWizard {\n"
        "    background-color: #000000;\n"
        "    color: #f0fff4;\n"
        "}\n"
        "QWidget#centralWidget, QStackedWidget {\n"
        "    background: transparent;\n"
        "}\n"
        "QToolBar#mainToolBar {\n"
        "    background: #040507;\n"
        "    border: none;\n"
        "    border-right: 1px solid rgba(0, 255, 136, 0.20);\n"
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
        "    background: rgba(0, 255, 136, 0.04);\n"
        "    border: 1px solid rgba(0, 255, 136, 0.12);\n"
        "    color: #d8f5e2;\n"
        "}\n"
        "QToolBar#mainToolBar QToolButton:hover {\n"
        "    background: rgba(0, 255, 136, 0.18);\n"
        "    border: 1px solid #00ff88;\n"
        "    color: #ffffff;\n"
        "}\n"
        "QToolBar#mainToolBar QToolButton[defaultAction=\"actionAddInstance\"],\n"
        "QToolBar#mainToolBar QToolButton#actionAddInstance {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 255, 136, 0.25), stop:1 rgba(0, 200, 100, 0.28));\n"
        "    border: 1px solid #00ff88;\n"
        "    color: #00ff88;\n"
        "    font-weight: 700;\n"
        "}\n"
        "QToolBar#instanceToolBar {\n"
        "    background: #030406;\n"
        "    border: none;\n"
        "    border-top: 1px solid rgba(0, 255, 136, 0.22);\n"
        "    spacing: 8px;\n"
        "    padding: 6px 16px;\n"
        "    min-height: 60px;\n"
        "}\n"
        "QToolButton[defaultAction=\"actionLaunchInstance\"], QToolButton#actionLaunchInstance {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #00ff88, stop:1 #00bd5b);\n"
        "    color: #000000;\n"
        "    font-weight: 900;\n"
        "    border: 1px solid #00ff88;\n"
        "    border-radius: 9px;\n"
        "    padding: 9px 24px;\n"
        "    font-size: 14px;\n"
        "}\n"
        "QToolButton[defaultAction=\"actionLaunchInstance\"]:hover, QToolButton#actionLaunchInstance:hover {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #39ff14, stop:1 #00ff88);\n"
        "    border: 1px solid #ffffff;\n"
        "}\n"
        "QListView, QTreeView, QTableView {\n"
        "    background: #000000;\n"
        "    border: 1px solid rgba(0, 255, 136, 0.15);\n"
        "    border-radius: 12px;\n"
        "    color: #f0fff4;\n"
        "    selection-background-color: rgba(0, 255, 136, 0.22);\n"
        "    selection-color: #ffffff;\n"
        "}\n"
        "QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QComboBox {\n"
        "    background: #06090d;\n"
        "    border: 1px solid rgba(0, 255, 136, 0.20);\n"
        "    border-radius: 7px;\n"
        "    padding: 6px 10px;\n"
        "    color: #f0fff4;\n"
        "}\n"
        "QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus, QComboBox:focus {\n"
        "    border: 1px solid #00ff88;\n"
        "}\n"
        "QMenuBar {\n"
        "    background: #000000;\n"
        "    color: #e8ffe8;\n"
        "    border-bottom: 1px solid rgba(0, 255, 136, 0.12);\n"
        "}\n"
        "QStatusBar {\n"
        "    background: #000000;\n"
        "    border-top: 1px solid rgba(0, 255, 136, 0.15);\n"
        "    color: #7ba885;\n"
        "}\n"
    );
}
