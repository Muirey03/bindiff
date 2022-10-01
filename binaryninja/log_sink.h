// Copyright 2019-2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BINARYNINJA_LOG_SINK_H_
#define BINARYNINJA_LOG_SINK_H_

#include "third_party/absl/log/log_sink.h"
#include "third_party/zynamics/binexport/util/logging.h"

namespace security::binexport {

class BinaryNinjaLogSink : public absl::LogSink {
 private:
  void Send(const absl::LogEntry& entry) override;
};

}  // namespace security::binexport

#endif  // BINARYNINJA_LOG_SINK_H_
