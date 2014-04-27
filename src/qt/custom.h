#ifndef CUSTOM_H
#define CUSTOM_H

#include "util.h"
#include <QString>

inline boost::filesystem::path GetCustomDir()
{
  return GetDataDir(false) / "custom";
}

inline QString GetCustomPath(const boost::filesystem::path &custom_path, const QString &default_path)
{
  return boost::filesystem::exists(custom_path) ? custom_path.string().c_str() : default_path;
}

#endif // CUSTOM_H
