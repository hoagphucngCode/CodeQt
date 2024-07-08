#include "buttonhandler.h"

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
