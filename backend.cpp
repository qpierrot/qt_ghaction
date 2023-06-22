#include "backend.h"

Backend::Backend(QObject *parent)
    : QObject{parent}
{

}

QString Backend::title() const
{
    return m_title;
}

void Backend::setTitle(const QString &newTitle)
{
    if (m_title == newTitle)
        return;
    m_title = newTitle;
    emit titleChanged();
}
