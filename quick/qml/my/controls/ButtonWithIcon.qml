import QtQuick 2.14

import my.style 1.0

Button {
    id: root

    property alias iconSource: icon.source

    itemMetric: AppStyle.buttonWithIconMetric

    width: root.textMetrics.boundingRect.width + 2 * root.itemMetric.margin + root.icon.width + root.itemMetric.spacing
    contentItem: Row {
        anchors.fill: parent
        anchors.leftMargin: root.itemMetric.margin
        anchors.rightMargin: root.itemMetric.margin
        spacing: root.itemMetric.spacing

        Text {
            height: parent.height
            text: root.text
            font: root.font
            color: root.itemPalette.textColor
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }

        Image {
            id: icon
            anchors.verticalCenter: parent.verticalCenter
            width: root.itemMetric.iconSize
            height: parent.height
            fillMode: Image.PreserveAspectFit
        }
    }
}
