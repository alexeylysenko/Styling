import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls

import my.style 1.0

QtControls.Button {
    id: root

    property var itemPalette: AppStyle.buttonPalette
    property var itemMetric: AppStyle.buttonMetric

    readonly property var textMetrics: TextMetrics {
        font: root.font
        text: root.text
    }

    width: root.textMetrics.boundingRect.width + 2 * root.itemMetric.margin
    implicitHeight: root.itemMetric.height
    font: AppStyle.fonts.copyButton

    background: Rectangle {
        color: root.enabled
               ? (root.pressed ? root.itemPalette.bgPressedColor : root.itemPalette.bgColor)
               : root.itemPalette.bgDisabledColor
        radius: root.itemMetric.radius
    }

    contentItem: Text {
        text: root.text
        font: root.font
        color: root.itemPalette.textColor
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}
