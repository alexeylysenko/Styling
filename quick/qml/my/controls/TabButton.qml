import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls

import my.style 1.0

QtControls.TabButton {
    id: root

    property var itemPalette: AppStyle.tabBarPalette
    property var itemMetric: AppStyle.tabBarMetric

    width: textMetrics.boundingRect.width + 2 * root.itemMetric.buttonMargin
    height: root.itemMetric.contentHeight
    font: root.checked ? AppStyle.fonts.navigationHeadBold : AppStyle.fonts.navigationHead

    background: null

    contentItem: Item {
        Text {
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.verticalCenter: parent.verticalCenter
            anchors.verticalCenterOffset: root.itemMetric.buttonVerticalOffset
            text: root.text
            color: root.itemPalette.tabTextColor
            font: root.font
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }

    TextMetrics {
         id: textMetrics
         font: root.font
         text: root.text
     }
}
