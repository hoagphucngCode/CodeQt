import QtQuick
import QtQuick.Controls
import "icon"
import "bkg"

Window {
    width: 1080
    height: 720
    visible: true

    Rectangle {
        id: recBkg
        width: 1080
        height: 720
        color: "lightgray"
        anchors.horizontalCenter: parent.horizontalCenter

        clip: true

        Image {
            id: backgroundExample
            source: "bkg/bkg_test.png"
            width: recBkg.width
            height: recBkg.height
        }

        Rectangle {
            id: recLeft
            width: parent.width * 2/3 + 90
            height: parent.height
            color: "#201f3b"
            anchors.left: parent.left
            opacity: 0.7

            Button {
                id: btnShuffle
                width: 40
                height: 40
                x: 30
                y: 20

                background: Rectangle {
                    color: "#FFFFFF"
                    opacity: 0.8
                }

                Image {
                    id: iconShuffle
                    source: "icon/shuffle-arrows.png"
                    anchors.centerIn: parent
                    width: btnShuffle.width
                    height: btnShuffle.height
                    opacity: 1.0
                }

                onClicked: {
                    btnHandler.shuffleButton()
                }
            }

            Button {
                id: btnPrev
                width: 40
                height: 40
                x: 90
                y: 20

                background: Rectangle {
                    color: "#FFFFFF"
                    opacity: 0.8
                }

                Image {
                    id: iconPrev
                    source: "icon/previous.png"
                    anchors.centerIn: parent
                    width: btnPrev.width
                    height: btnPrev.height
                    opacity: 1.0
                }

                onClicked: {
                    btnHandler.prev()
                }
            }

            Button {
                id: btnNext
                width: 40
                height: 40
                x: 180
                y: 20

                background: Rectangle {
                    color: "#FFFFFF"
                    opacity: 0.8
                }

                Image {
                    id: iconNext
                    source: "icon/next.png"
                    anchors.centerIn: parent
                    width: btnNext.width
                    height: btnNext.height
                    opacity: 1.0
                }

                onClicked: {
                    btnHandler.next()
                }
            }

            states: [
                State {
                    name: "expanded"
                    PropertyChanges {
                        target: recLeft
                        width: parent.width
                    }
                },
                State {
                    name: "collapsed"
                    PropertyChanges {
                        target: recLeft
                        width: parent.width * 2/3 + 90
                    }
                }
            ]

            transitions: [
                Transition {
                    from: "collapsed"
                    to: "expanded"
                    reversible: true
                    ParallelAnimation {
                        NumberAnimation {
                            properties: "width"
                            duration: 300
                            easing.type: Easing.InOutQuad
                        }
                    }
                }
            ]

            Behavior on width {
                NumberAnimation {
                    duration: 300
                    easing.type: Easing.InOutQuad
                }
            }
        }

        Rectangle {
            id: recRight
            width: parent.width * 1/3 - 90
            height: parent.height
            color: "#000000"
            anchors.right: parent.right
            opacity: 0.7

            states: [
                State {
                    name: "collapsed"
                    PropertyChanges {
                        target: recRight
                        width: 0
                    }
                    PropertyChanges {
                        target: btnList
                        x: parent.width - btnList.width - 10
                    }
                },
                State {
                    name: "expanded"
                    PropertyChanges {
                        target: recRight
                        width: parent.width * 1/3 - 90
                    }
                    PropertyChanges {
                        target: btnList
                        x: 30
                    }
                }
            ]

            transitions: [
                Transition {
                    from: "expanded"
                    to: "collapsed"
                    reversible: true
                    ParallelAnimation {
                        NumberAnimation {
                            properties: "width"
                            duration: 300
                            easing.type: Easing.InOutQuad
                        }
                        NumberAnimation {
                            properties: "x"
                            duration: 300
                            easing.type: Easing.InOutQuad
                        }
                    }
                }
            ]

            Column {
                id: btnListColumn
                spacing: 10
            }

            Button {
                id: btnList
                width: 40
                height: 40
                x: 30
                y: 20

                onClicked: {
                    btnHandler.togglePlayList();
                }

                background: Rectangle {
                    color: "transparent"
                    opacity: 0.8
                }

                Image {
                    id: iconList
                    source: "icon/PlayList.png"
                    anchors.centerIn: parent
                    width: btnList.width
                    height: btnList.height
                    opacity: 1.0
                }
            }

            Text {
                id: nextM
                text: "Next Playing"
                font.pixelSize: 20
                font.bold: true
                opacity: 1
                anchors {
                    top: btnList.top
                    topMargin: 80
                    left: parent.left
                    leftMargin: 34
                }
                color: "white"
            }

            ListView {
                id: playM
                width: recRight.width
                height: parent.height - nextM.height - btnList.height - 90
                anchors {
                    top: nextM.bottom
                    topMargin: 60
                    left: parent.left
                    leftMargin: 30
                }
                clip: true

                // boundsBehavior: Flickable.StopAtBounds

                model: playListModel

                delegate: Item {
                    width: playM.width
                    height: 60
                    clip: true

                    Rectangle {
                        width: parent.width
                        height: parent.height
                        color: "transparent"

                        Text {
                            id: indexF
                            text: (index + 1) + " "
                            width: 30
                            font.pixelSize: 18
                            color: "white"
                        }

                        Text {
                            id: titleB
                            text: title
                            font.pixelSize: 18
                            anchors.left: indexF.right
                            color:"#3f5cb0"
                            font.bold: true
                            width: parent.width - 40
                            wrapMode: Text.Wrap
                            elide: Text.ElideRight
                        }

                        MouseArea {
                            anchors.fill: parent
                            onClicked: {
                                console.log("Clicked on " + title)

                            }
                        }
                    }
                }
            }
        }
    }

    ListModel {
        id: playListModel
        ListElement { title: "Song 1" }
        ListElement { title: "Song 2" }
        ListElement { title: "Song 3" }
        ListElement { title: "Song 4" }
        ListElement { title: "Song 5" }
        ListElement { title: "Song 6" }
        ListElement { title: "Song 7" }
        ListElement { title: "Song 8" }
        ListElement { title: "Song 9" }
        ListElement { title: "Song 10" }
        ListElement { title: "Song 11" }
        ListElement { title: "Song 12" }
        ListElement { title: "Song 13" }
        ListElement { title: "Song 14" }
        ListElement { title: "Song 15" }
        ListElement { title: "Song 16" }
        ListElement { title: "Song 17" }
        ListElement { title: "Song 18" }
        ListElement { title: "Song 19" }
        ListElement { title: "Song 20" }
        ListElement { title: "Song 21" }
        ListElement { title: "Song 22" }
        ListElement { title: "Song 23" }
        ListElement { title: "Song 24" }
        ListElement { title: "Song 25" }
        ListElement { title: "Song 26" }
        ListElement { title: "Song 27" }
        ListElement { title: "Song 28" }
        ListElement { title: "Song 29" }
    }

    function shuffleArray(array) {
        console.log("Shuffling array")
        for (let i = array.count - 1; i > 0; i--) {
            const j = Math.floor(Math.random() * (i + 1));
            const tempTitle = array.get(i).title;
            array.set(i, { title: array.get(j).title });
            array.set(j, {title: tempTitle})
        }
    }

    Connections {
        target: btnHandler
        function onPlaylistShuffled() {
            shuffleArray(playListModel)
        }
    }

    Connections {
        target: btnHandler
        function onRecLeftStateChanged() {
            recLeft.state = btnHandler.recLeftState
        }
    }

    Connections {
        target: btnHandler
        function onRecRightStateChanged() {
            recRight.state = btnHandler.recRightState
        }
    }

    Connections {
        target: btnHandler
        function onPrevButton() {}
    }

    Connections {
        target: btnHandler
        function onNextButton() {}
    }
}
