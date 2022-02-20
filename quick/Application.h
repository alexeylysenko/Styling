#pragma once

#include <QGuiApplication>

#include <QQmlApplicationEngine>

#include <style/MyUiStyle.h>

class Application : public QGuiApplication {
  Q_OBJECT
public:
  Application(int &argc, char **argv);

signals:
  void appStyleChanged(style::MyUiStyle *appStyle);

private:
  style::MyUiStyle *m_appStyle = nullptr;
  QQmlApplicationEngine m_qmlEngine;
};
