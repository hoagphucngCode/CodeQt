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

public slots:
    void shuffleButton();

    void prev();
    void next();

    void togglePlayList();
    void addPlaylist();
    void scanMusicFolder(const QString &folderPath);

signals:
    void playlistShuffled();

    void prevButton();
    void nextButton();

    void playListButton();
    void addPlaylistItem(const QVariantMap &item);
    void musicFolderScanned(const QStringList &filePaths);

    void recLeftStateChanged();
    void recRightStateChanged();

private:
    QString m_recLeftState;
    QString m_recRightState;

    void addToPlaylist(const QString &filePath);
};

#endif // BUTTONHANDLER_H
