#include "buttonhandler.h"
#include <cstdlib>
#include <ctime>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>
#include <QDir>
#include <QFileInfo>

ButtonHandler::ButtonHandler(QObject *parent) : QObject(parent),
    m_recLeftState("expanded"), m_recRightState("collapsed")
{
    std::srand(std::time(nullptr));
}

QString ButtonHandler::recLeftState() const
{
    return m_recLeftState;
}

void ButtonHandler::setRecLeftState(const QString &state)
{
    if (m_recLeftState != state) {
        m_recLeftState = state;
        emit recLeftStateChanged();
    }
}

QString ButtonHandler::recRightState() const
{
    return m_recRightState;
}

void ButtonHandler::setRecRightState(const QString &state)
{
    if (m_recRightState != state) {
        m_recRightState = state;
        emit recRightStateChanged();
    }
}

void ButtonHandler::shuffleButton()
{
    // Shuffle logic
    emit playlistShuffled();
}

void ButtonHandler::prev()
{
    // Prev logic
    emit prevButton();
}

void ButtonHandler::next()
{
    // Next logic
    emit nextButton();
}

void ButtonHandler::togglePlayList()
{
    if (m_recLeftState == "expanded" && m_recRightState == "collapsed") {
        setRecLeftState("collapsed");
        setRecRightState("expanded");
    } else if (m_recLeftState == "collapsed" && m_recRightState == "expanded") {
        setRecLeftState("expanded");
        setRecRightState("collapsed");
    }
    emit playListButton();
}

void ButtonHandler::setMusicFolder(const QString &folder)
{
    QDir musicDir(folder);
    QList<QVariant> playlist;

    if (musicDir.exists()) {
        QStringList filters;
        filters << "*.mp3" << "*.wav" << "*.ogg";
        QFileInfoList fileInfoList = musicDir.entryInfoList(filters, QDir::Files);

        for (const QFileInfo &fileInfo : fileInfoList) {
            QVariantMap song;
            song["title"] = fileInfo.fileName();
            song["path"] = QUrl::fromLocalFile(fileInfo.absoluteFilePath()).toString();
            playlist.append(song);
        }
    }

    emit updatePlaylist(playlist);
}
