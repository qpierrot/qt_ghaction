import QtQuick
import MyProject

Window {
    width: 640
    height: 480
    visible: true
    title: backend.title

    Backend {
        id: backend
        title: qsTr("Hello World")
    }
}
