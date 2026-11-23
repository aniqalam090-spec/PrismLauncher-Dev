// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PakClient - Cyber Midnight OLED Theme
 *  Copyright (C) 2026 Aniq Alam
 */
#pragma once

#include "FusionTheme.h"

class PakClientMidnightTheme : public FusionTheme {
   public:
    virtual ~PakClientMidnightTheme() {}

    QString id() override;
    QString name() override;
    QString tooltip() override;
    bool hasStyleSheet() override;
    QString appStyleSheet() override;
    QPalette colorScheme() override;
    double fadeAmount() override;
    QColor fadeColor() override;
};
