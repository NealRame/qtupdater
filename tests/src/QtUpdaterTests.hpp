#pragma once

#include <QObject>

class UpdaterTests : public QObject {
  Q_OBJECT

public:
  UpdaterTests();

private slots:
  void test_emptyServerUrl();
  void test_invalidServerUrl();
  void test_validServerUrlButNoServer();

  void test_validAppcastUrl();
  void test_validAppcastUrlButNoServer();
  void test_validAppcastUrlButNoUpdate();

  void test_validChangelogUrl();
  void test_invalidChangelogUrl();

  void test_validInstallerUrl();
  void test_invalidInstallerUrl();
};
