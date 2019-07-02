// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE.chromium file.

// TODO(deermichel): remove _gin suffix after removing mate

#include "shell/common/api/locker_gin.h"

namespace gin {

Locker::Locker(v8::Isolate* isolate) {
  if (IsBrowserProcess())
    locker_.reset(new v8::Locker(isolate));
}

Locker::~Locker() {}

}  // namespace gin