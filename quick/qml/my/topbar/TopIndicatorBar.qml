import QtQuick 2.14

import my.style 1.0

Rectangle {
    id: root

    property var itemPalette: AppStyle.topIndicatorBarPalette
    property var itemMetric: AppStyle.topIndicatorBarMetric

    width: parent.width
    height: root.itemMetric.height
    color: root.itemPalette.bgColor
}
