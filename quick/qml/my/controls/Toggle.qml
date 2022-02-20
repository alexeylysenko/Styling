import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls

import my.style 1.0

QtControls.Switch {
    id: root

    property var itemPalette: AppStyle.togglePalette
    property var itemMetric: AppStyle.toggleMetric

    indicator: Rectangle {
        implicitWidth: root.itemMetric.width
        implicitHeight: root.itemMetric.height
        y: parent.height / 2 - height / 2
        radius: root.itemMetric.radius
        color: root.checked ? root.itemPalette.bgCheckedColor : root.itemPalette.bgColor
        border.color: root.checked ? root.itemPalette.borderCheckedColor : root.itemPalette.borderColor

        Rectangle {
            x: root.checked ? parent.width - width : 0
            y: parent.height / 2 - height / 2
            width: root.itemMetric.indicatorWidth
            height: root.itemMetric.indicatorHeight
            radius: root.itemMetric.indicatorRadius
            color: root.down ? root.itemPalette.indicatorDownColor : root.itemPalette.indicatorColor
            border.color: root.checked ? root.itemPalette.indicatorBorderCheckedColor : root.itemPalette.indicatorBorderColor
        }
    }
}
