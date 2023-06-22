#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QQmlEngine>

class Backend : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)

public:
    explicit Backend(QObject *parent = nullptr);

    QString title() const;
    void setTitle(const QString &newTitle);

signals:

    void titleChanged();
private:
    QString m_title;
};

#endif // BACKEND_H
