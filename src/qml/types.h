// SPDX-FileCopyrightText: 2023 Nicolas Fella <nicolas.fella@gmx.de>
// SPDX-License-Identifier: LGPL-2.0-or-later

#ifndef KCONFIGTYPES_H
#define KCONFIGTYPES_H

#include <QQmlEngine>

#include <kauthorized.h>

struct KAuthorizedForeign {
    Q_GADGET
    QML_NAMED_ELEMENT(KAuthorized)
    QML_SINGLETON
    QML_FOREIGN(KAuthorized)
};

#endif
