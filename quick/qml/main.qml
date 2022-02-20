import QtQuick 2.14
import QtQuick.Controls 2.14 as QtControls
import QtQuick.Layouts 1.14

import my.controls 1.0
import my.topbar 1.0
import my.style 1.0

QtControls.ApplicationWindow {
    id: root

    visible: true
    minimumWidth: 16.667 * AppStyle.tu
    minimumHeight: 10 * AppStyle.tu
    title: qsTr("Style Sample")

    header: TopIndicatorBar {}

    ColumnLayout {
        anchors.fill: parent

        TabBar {
            Layout.fillWidth: true
            TabButton {
                text: qsTr("Home")
            }

            TabButton {
                text: qsTr("Run Log")
            }

            TabButton {
                text: qsTr("Settings")
            }
        }

        Rectangle {
            Layout.fillHeight: true
            Layout.fillWidth: true

            GridLayout {
                anchors.centerIn: parent
                columns: 2
                rowSpacing: 20
                columnSpacing: 20

                Button {
                    text: qsTr("I'm a button")
                }

                ButtonWithIcon {
                    text: qsTr("Button with icon")
                    iconSource: "qrc:/icon/play.svg"
                }

                ComboBox {
                    Layout.fillWidth: true
                    model: ["First", "Second", "Third"]
                }

                ProgressBar {
                    Layout.fillWidth: true
                    value: 0.5
                }

                Toggle {
                    checked: true
                }

                Toggle {
                    checked: false
                }
            }
        }
    }
}
