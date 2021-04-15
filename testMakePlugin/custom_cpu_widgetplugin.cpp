#include "custom_cpu_widget.h"
#include "custom_cpu_widgetplugin.h"

#include <QtPlugin>

custom_cpu_widgetplugin::custom_cpu_widgetplugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void custom_cpu_widgetplugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool custom_cpu_widgetplugin::isInitialized() const
{
    return m_initialized;
}

QWidget *custom_cpu_widgetplugin::createWidget(QWidget *parent)
{
    return new custom_cpu_widget(parent);
}

QString custom_cpu_widgetplugin::name() const
{
    return QLatin1String("custom_cpu_widget");
}

QString custom_cpu_widgetplugin::group() const
{
    return QLatin1String("");
}

QIcon custom_cpu_widgetplugin::icon() const
{
    return QIcon();
}

QString custom_cpu_widgetplugin::toolTip() const
{
    return QLatin1String("");
}

QString custom_cpu_widgetplugin::whatsThis() const
{
    return QLatin1String("");
}

bool custom_cpu_widgetplugin::isContainer() const
{
    return false;
}

QString custom_cpu_widgetplugin::domXml() const
{
    return QLatin1String("<widget class=\"custom_cpu_widget\" name=\"custom_cpu_widget\">\n</widget>\n");
}

QString custom_cpu_widgetplugin::includeFile() const
{
    return QLatin1String("custom_cpu_widget.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(custom_cpu_widgetplugin, custom_cpu_widgetplugin)
#endif // QT_VERSION < 0x050000
