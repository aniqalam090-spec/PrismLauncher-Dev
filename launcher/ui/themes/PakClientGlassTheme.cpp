// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PakClient - Fast, Lightweight Glassmorphic Theme
 *  Copyright (C) 2026 Aniq Alam
 */
#include "PakClientGlassTheme.h"

#include <QObject>

QString PakClientGlassTheme::id()
{
    return "pakclient_glass";
}

QString PakClientGlassTheme::name()
{
    return QObject::tr("PakClient Glass");
}

QString PakClientGlassTheme::tooltip()
{
    return QObject::tr("Fast, lightweight dark glassmorphic theme with crisp neon accents");
}

bool PakClientGlassTheme::hasStyleSheet()
{
    return true;
}

double PakClientGlassTheme::fadeAmount()
{
    return 0.5;
}

QColor PakClientGlassTheme::fadeColor()
{
    return QColor(15, 19, 28);
}

QPalette PakClientGlassTheme::colorScheme()
{
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(15, 19, 28));
    palette.setColor(QPalette::WindowText, QColor(235, 240, 250));
    palette.setColor(QPalette::Base, QColor(12, 16, 24));
    palette.setColor(QPalette::AlternateBase, QColor(20, 26, 38));
    palette.setColor(QPalette::ToolTipBase, QColor(16, 22, 34));
    palette.setColor(QPalette::ToolTipText, QColor(235, 240, 250));
    palette.setColor(QPalette::Text, QColor(235, 240, 250));
    palette.setColor(QPalette::Button, QColor(22, 28, 42));
    palette.setColor(QPalette::ButtonText, QColor(235, 240, 250));
    palette.setColor(QPalette::BrightText, QColor(0, 240, 255));
    palette.setColor(QPalette::Link, QColor(0, 212, 255));
    palette.setColor(QPalette::Highlight, QColor(0, 180, 230));
    palette.setColor(QPalette::HighlightedText, QColor(10, 14, 22));
    palette.setColor(QPalette::PlaceholderText, QColor(110, 125, 145));
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QString PakClientGlassTheme::appStyleSheet()
{
    return QStringLiteral(
        "QMainWindow, QDialog, QWizard {\n"
        "    background-color: #0f131c;\n"
        "    color: #ebf0fa;\n"
        "}\n"
        "QWidget#centralWidget, QStackedWidget {\n"
        "    background: transparent;\n"
        "}\n"
        "QToolBar {\n"
        "    background: rgba(20, 26, 38, 0.85);\n"
        "    border: none;\n"
        "    border-bottom: 1px solid rgba(0, 212, 255, 0.2);\n"
        "    spacing: 5px;\n"
        "    padding: 4px 6px;\n"
        "}\n"
        "QToolBar::separator {\n"
        "    background: rgba(255, 255, 255, 0.1);\n"
        "    width: 1px;\n"
        "    margin: 4px 6px;\n"
        "}\n"
        "QToolButton {\n"
        "    background: rgba(255, 255, 255, 0.04);\n"
        "    border: 1px solid rgba(255, 255, 255, 0.08);\n"
        "    border-radius: 6px;\n"
        "    padding: 5px 9px;\n"
        "    color: #e2e8f0;\n"
        "    font-weight: 500;\n"
        "}\n"
        "QToolButton:hover {\n"
        "    background: rgba(0, 212, 255, 0.12);\n"
        "    border: 1px solid rgba(0, 212, 255, 0.45);\n"
        "    color: #ffffff;\n"
        "}\n"
        "QToolButton:pressed, QToolButton:checked {\n"
        "    background: rgba(0, 212, 255, 0.22);\n"
        "    border: 1px solid #00d4ff;\n"
        "    color: #ffffff;\n"
        "}\n"
        "QPushButton {\n"
        "    background: rgba(26, 34, 50, 0.85);\n"
        "    border: 1px solid rgba(255, 255, 255, 0.12);\n"
        "    border-radius: 6px;\n"
        "    padding: 6px 14px;\n"
        "    color: #e2e8f0;\n"
        "    font-weight: 500;\n"
        "}\n"
        "QPushButton:hover {\n"
        "    background: rgba(0, 212, 255, 0.16);\n"
        "    border: 1px solid rgba(0, 212, 255, 0.55);\n"
        "    color: #ffffff;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background: rgba(0, 212, 255, 0.28);\n"
        "    border: 1px solid #00d4ff;\n"
        "    color: #ffffff;\n"
        "}\n"
        "QPushButton:disabled {\n"
        "    background: rgba(255, 255, 255, 0.03);\n"
        "    border: 1px solid rgba(255, 255, 255, 0.05);\n"
        "    color: #556275;\n"
        "}\n"
        "QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QDoubleSpinBox, QComboBox {\n"
        "    background: rgba(14, 18, 28, 0.9);\n"
        "    border: 1px solid rgba(255, 255, 255, 0.12);\n"
        "    border-radius: 6px;\n"
        "    padding: 5px 8px;\n"
        "    color: #f1f5f9;\n"
        "    selection-background-color: #00d4ff;\n"
        "    selection-color: #0a0e16;\n"
        "}\n"
        "QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus, QComboBox:focus {\n"
        "    border: 1px solid #00d4ff;\n"
        "    background: rgba(18, 24, 38, 0.95);\n"
        "}\n"
        "QComboBox::drop-down {\n"
        "    subcontrol-origin: padding;\n"
        "    subcontrol-position: top right;\n"
        "    width: 20px;\n"
        "    border-left: 1px solid rgba(255, 255, 255, 0.08);\n"
        "}\n"
        "QListView, QTreeView, QTableView {\n"
        "    background: rgba(13, 17, 26, 0.85);\n"
        "    border: 1px solid rgba(255, 255, 255, 0.08);\n"
        "    border-radius: 8px;\n"
        "    alternate-background-color: rgba(20, 26, 38, 0.6);\n"
        "    color: #e2e8f0;\n"
        "    selection-background-color: rgba(0, 212, 255, 0.22);\n"
        "    selection-color: #ffffff;\n"
        "    outline: none;\n"
        "    padding: 3px;\n"
        "}\n"
        "QListView::item {\n"
        "    border-radius: 5px;\n"
        "    padding: 3px 6px;\n"
        "    margin: 1px;\n"
        "}\n"
        "QListView::item:hover, QTreeView::item:hover, QTableView::item:hover {\n"
        "    background: rgba(0, 212, 255, 0.1);\n"
        "}\n"
        "QListView::item:selected, QTreeView::item:selected, QTableView::item:selected {\n"
        "    background: rgba(0, 212, 255, 0.24);\n"
        "    border: 1px solid rgba(0, 212, 255, 0.45);\n"
        "    color: #ffffff;\n"
        "}\n"
        "QHeaderView::section {\n"
        "    background: rgba(20, 26, 38, 0.9);\n"
        "    border: none;\n"
        "    border-bottom: 1px solid rgba(0, 212, 255, 0.25);\n"
        "    border-right: 1px solid rgba(255, 255, 255, 0.06);\n"
        "    padding: 5px 8px;\n"
        "    color: #94a3b8;\n"
        "    font-weight: 600;\n"
        "}\n"
        "QTabWidget::pane {\n"
        "    border: 1px solid rgba(255, 255, 255, 0.08);\n"
        "    background: rgba(18, 23, 34, 0.85);\n"
        "    border-radius: 8px;\n"
        "}\n"
        "QTabBar::tab {\n"
        "    background: rgba(255, 255, 255, 0.03);\n"
        "    border: 1px solid rgba(255, 255, 255, 0.06);\n"
        "    border-bottom: none;\n"
        "    border-top-left-radius: 6px;\n"
        "    border-top-right-radius: 6px;\n"
        "    padding: 6px 14px;\n"
        "    margin-right: 3px;\n"
        "    color: #94a3b8;\n"
        "}\n"
        "QTabBar::tab:hover {\n"
        "    background: rgba(0, 212, 255, 0.08);\n"
        "    color: #e2e8f0;\n"
        "}\n"
        "QTabBar::tab:selected {\n"
        "    background: rgba(18, 23, 34, 0.95);\n"
        "    border-color: rgba(255, 255, 255, 0.1);\n"
        "    border-top: 2px solid #00d4ff;\n"
        "    color: #00d4ff;\n"
        "    font-weight: 600;\n"
        "}\n"
        "QGroupBox {\n"
        "    border: 1px solid rgba(255, 255, 255, 0.1);\n"
        "    border-radius: 8px;\n"
        "    margin-top: 18px;\n"
        "    padding-top: 14px;\n"
        "    background: rgba(20, 26, 38, 0.45);\n"
        "    font-weight: bold;\n"
        "}\n"
        "QGroupBox::title {\n"
        "    subcontrol-origin: margin;\n"
        "    subcontrol-position: top left;\n"
        "    left: 12px;\n"
        "    padding: 0 5px;\n"
        "    color: #00d4ff;\n"
        "}\n"
        "QScrollBar:vertical {\n"
        "    background: rgba(11, 15, 23, 0.6);\n"
        "    width: 10px;\n"
        "    margin: 0px;\n"
        "    border-radius: 5px;\n"
        "}\n"
        "QScrollBar::handle:vertical {\n"
        "    background: rgba(255, 255, 255, 0.16);\n"
        "    min-height: 24px;\n"
        "    border-radius: 5px;\n"
        "}\n"
        "QScrollBar::handle:vertical:hover {\n"
        "    background: rgba(0, 212, 255, 0.45);\n"
        "}\n"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
        "    height: 0px;\n"
        "}\n"
        "QScrollBar:horizontal {\n"
        "    background: rgba(11, 15, 23, 0.6);\n"
        "    height: 10px;\n"
        "    margin: 0px;\n"
        "    border-radius: 5px;\n"
        "}\n"
        "QScrollBar::handle:horizontal {\n"
        "    background: rgba(255, 255, 255, 0.16);\n"
        "    min-width: 24px;\n"
        "    border-radius: 5px;\n"
        "}\n"
        "QScrollBar::handle:horizontal:hover {\n"
        "    background: rgba(0, 212, 255, 0.45);\n"
        "}\n"
        "QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
        "    width: 0px;\n"
        "}\n"
        "QMenuBar {\n"
        "    background: rgba(15, 19, 28, 0.95);\n"
        "    border-bottom: 1px solid rgba(255, 255, 255, 0.08);\n"
        "    color: #e2e8f0;\n"
        "}\n"
        "QMenuBar::item:selected {\n"
        "    background: rgba(0, 212, 255, 0.14);\n"
        "    border-radius: 4px;\n"
        "    color: #00d4ff;\n"
        "}\n"
        "QMenu {\n"
        "    background: rgba(18, 23, 34, 0.96);\n"
        "    border: 1px solid rgba(0, 212, 255, 0.25);\n"
        "    border-radius: 8px;\n"
        "    padding: 4px;\n"
        "    color: #e2e8f0;\n"
        "}\n"
        "QMenu::item {\n"
        "    padding: 5px 22px 5px 18px;\n"
        "    border-radius: 4px;\n"
        "}\n"
        "QMenu::item:selected {\n"
        "    background: rgba(0, 212, 255, 0.2);\n"
        "    color: #ffffff;\n"
        "}\n"
        "QMenu::separator {\n"
        "    height: 1px;\n"
        "    background: rgba(255, 255, 255, 0.08);\n"
        "    margin: 4px 6px;\n"
        "}\n"
        "QProgressBar {\n"
        "    border: 1px solid rgba(255, 255, 255, 0.1);\n"
        "    border-radius: 6px;\n"
        "    text-align: center;\n"
        "    background: rgba(12, 16, 24, 0.8);\n"
        "    color: #ffffff;\n"
        "}\n"
        "QProgressBar::chunk {\n"
        "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #0077b6, stop:1 #00d4ff);\n"
        "    border-radius: 5px;\n"
        "}\n"
        "QStatusBar {\n"
        "    background: rgba(12, 16, 24, 0.9);\n"
        "    border-top: 1px solid rgba(255, 255, 255, 0.06);\n"
        "    color: #94a3b8;\n"
        "}\n"
        "QToolTip {\n"
        "    background: rgba(14, 20, 32, 0.95);\n"
        "    color: #f1f5f9;\n"
        "    border: 1px solid rgba(0, 212, 255, 0.35);\n"
        "    border-radius: 6px;\n"
        "    padding: 5px 8px;\n"
        "}\n"
    );
}
