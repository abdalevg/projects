/* GraphRec
 * Copyright (c) 2009 Petr Koupy <petr.koupy@gmail.com>
 *
 * GNU General Public License Usage
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SVGIMAGERECORDER_H
#define SVGIMAGERECORDER_H

#include <QtCore/QString>

#include "recorders/imagerecorder.h"

class QWidget;
class QPaintDevice;

class SVGImageRecorder : public ImageRecorder
{
    Q_OBJECT

public:
    SVGImageRecorder();
    virtual ~SVGImageRecorder();
    static QString GetName() { return "SVG Generator"; }
    virtual QString Name() const { return SVGImageRecorder::GetName(); }
    virtual QString Description() const { return "SVG Generator"; }

    virtual QWidget* GetSettingsWidget();
    virtual QPaintDevice* GetPaintDevice(const QString& path, const QString& name, int width, int height);
    virtual void SaveImage(const QString& path, const QString& name, QPaintDevice* device);

protected slots:
    void SetTitle(const QString& text);
    void SetDescription(const QString& text);
    void SetDPI(int dpi);

private:
    QString m_title;
    QString m_description;
    int m_dpi;
};

#endif
