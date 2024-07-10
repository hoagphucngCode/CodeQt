#ifndef BUTTONHANDLER_H
#define BUTTONHANDLER_H

#include <QObject>
#include <QList>
#include <QVariant>
#include <QDir>
#include <QFileInfoList>

class ButtonHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString recLeftState READ recLeftState WRITE setRecLeftState NOTIFY recLeftStateChanged)
    Q_PROPERTY(QString recRightState READ recRightState WRITE setRecRightState NOTIFY recRightStateChanged)

public:
    explicit ButtonHandler(QObject *parent = nullptr);

    QString recLeftState() const;
    void setRecLeftState(const QString &state);

    QString recRightState() const;
    void setRecRightState(const QString &state);

    Q_INVOKABLE void setMusicFolder(const QString &folder);

public slots:
    void shuffleButton();

    void prev();
    void next();

    void togglePlayList();

signals:
    void playlistShuffled();

    void prevButton();
    void nextButton();

    void playListButton();
    void updatePlaylist(const QVariantList &playlist);

    void recLeftStateChanged();
    void recRightStateChanged();

private:
    QString m_recLeftState;
    QString m_recRightState;
};

#endif // BUTTONHANDLER_H
