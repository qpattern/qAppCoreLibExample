import QtQuick 2.0
import QtQuick.Controls 1.0

ApplicationWindow {
    width   : 640
    height  : 480

    visible : true

    title   : qsTr("Example")

    ListView {
        anchors.fill: parent

        model: peopleManager.model

        delegate: Row {
            width: parent.width
            height: childrenRect.height

            Text {
                width : parent.width * 0.3

                text: model.id
            }

            Text {
                width : parent.width * 0.7

                text: model.name
            }
        }
    }
}
