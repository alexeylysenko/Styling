import QtQuick 2.14

import my.style 1.0

Row {
    id: root

    property var itemMetric: AppStyle.tabBarMetric

    property alias newButtonEnabled: newButton.enabled
    property alias rerunButtonEnabled: rerunButton.enabled
    property alias clearButtonEnabled: clearButton.enabled

    signal newClicked()
    signal rerunClicked()
    signal clearClicked()

    spacing: root.itemMetric.spacing

    Button {
        id: newButton
        text: qsTr("New")

        onClicked: {
            root.newClicked()
        }
    }

    Button {
        id: rerunButton
        text: qsTr("Re-run")

        onClicked: {
            root.rerunClicked()
        }
    }

    Button {
        id: clearButton
        text: qsTr("Clear")

        onClicked: {
            root.clearClicked()
        }
    }
}
