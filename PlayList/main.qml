import QtQuick
import QtQuick.Controls

import "icon"
import "bkg"
import "ShuffleList.js" as Shufflelist

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
            width: parent.width * 2/3
            height: parent.height
            color: "#201f3b"
            anchors.left: parent.left
            opacity: 0.7

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
                        width: parent.width
                    }
                }
            ]

            transitions: [
                Transition {
                    reversible: true
                    PropertyAnimation {
                        properties: "width"
                        duration: 750
                        easing.type: Easing.OutExpo
                    }
                }
            ]
        }

        Rectangle {
            id: recRight
            width: parent.width * 1/3
            height: parent.height
            color: "#000000"
            anchors.right: parent.right
            opacity: 0.7

            states: [
                State {
                    name: "expanded"
                    PropertyChanges {
                        target: recRight
                        width: parent.width * 1/3
                    }
                    PropertyChanges {
                        target: btnList
                        x: 30
                    }
                    PropertyChanges {
                        target: btnLoop
                        x: 90
                    }
                    PropertyChanges {
                        target: btnLoop
                        y: 20
                    }
                },
                State {
                    name: "collapsed"
                    PropertyChanges {
                        target: recRight
                        width: 0
                    }
                    PropertyChanges {
                        target: btnList
                        x: parent.width - btnList.width - 30
                    }
                    PropertyChanges {
                        target: btnLoop
                        x: parent.width - btnLoop.width - 30
                    }
                    PropertyChanges {
                        target: btnLoop
                        y: btnList.y + btnList.height + 30
                    }
                }
            ]

            transitions: [
                Transition {
                    reversible: true
                    ParallelAnimation {
                        NumberAnimation {
                            properties: "width"
                            duration: 750
                            easing.type: Easing.OutExpo
                        }
                        NumberAnimation {
                            properties: "x"
                            duration: 750
                            easing.type: Easing.OutExpo
                        }
                        NumberAnimation {
                            properties: "y"
                            duration: 750
                            easing.type: Easing.OutExpo
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
                    recRight.state = recRight.state === "collapsed" ? "expanded" : "collapsed"

                    recLeft.state = recLeft.state === "collapsed" ? "expanded" : "expanded"
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

            Button {
                id: btnLoop
                width: 40
                height: 40
                x: 90
                y: 20

                property bool isLooping: false

                onClicked: {
                    isLooping = !isLooping
                    console.log("Loop button clicked, isLooping:", isLooping);

                    if (isLooping) {
                        iconLoop.source = "icon/LoopOne.png"
                    } else {
                        iconLoop.source = "icon/Loop.png"
                    }
                }

                background: Rectangle {
                    color: "transparent"
                    opacity: 0.8
                }

                Image {
                    id: iconLoop
                    source: "icon/Loop.png"
                    anchors.centerIn: parent
                    width: btnLoop.width
                    height: btnLoop.height
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
        ListElement {title: "Song 1"}
    }

    Connections {
        target: btnHandler
        function onPlaylistShuffled() {
            Shufflelist.shuffleArray(playListModel)
        }
    }
}
