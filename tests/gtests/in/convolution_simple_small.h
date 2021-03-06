/*******************************************************************************
* Copyright 2017 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

INST_TEST_CASE(SimpleSmall_NCHW,
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 4, 4, 4, 6, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 4, 4, 4, 6, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(nhwc, oihw, FMT_BIAS, nhwc,
        2, 1, 4, 4, 4, 6, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(nhwc, oihw, FMT_BIAS, nhwc,
        2, 1, 4, 4, 4, 6, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(nhwc, hwio, FMT_BIAS, nhwc,
        2, 1, 4, 4, 4, 6, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(nhwc, hwio, FMT_BIAS, nhwc,
        2, 1, 4, 4, 4, 6, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(nhwc, hwigo, FMT_BIAS, nhwc,
        2, 2, 4, 4, 4, 6, 4, 4, 3, 3, 0, 0, 1, 1),
    PARAMS(nhwc, hwigo, FMT_BIAS, nhwc,
        2, 2, 4, 4, 4, 6, 4, 4, 3, 3, 1, 1, 1, 1)
);

INST_TEST_CASE(SimpleSmall_Blocked,
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 13, 13, 32, 12, 12, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 3, 3, 32, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 4, 4, 32, 4, 4, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 3, 3, 32, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 2, 2, 32, 2, 2, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 13, 13, 48, 13, 13, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 13, 13, 48, 11, 11, 3, 3, 0, 0, 1, 1)
);

INST_TEST_CASE(SimpleSmall_Blocked16,
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 13, 13, 32, 12, 12, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 3, 3, 32, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 4, 4, 32, 4, 4, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 3, 3, 32, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 2, 2, 32, 2, 2, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 13, 13, 48, 13, 13, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 13, 13, 48, 11, 11, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 8, 8, 48, 5, 5, 4, 4, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 7, 7, 48, 10, 10, 4, 4, 3, 3, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 1, 1, 48, 2, 2, 4, 4, 2, 2, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 28, 28, 48, 13, 13, 4, 4, 0, 0, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 28, 28, 48, 14, 14, 4, 4, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 26, 26, 48, 13, 13, 4, 4, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 84, 84, 48, 28, 28, 5, 5, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 21, 21, 48, 7, 7, 5, 5, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 18, 18, 48, 5, 5, 6, 6, 2, 2, 4, 4),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 34, 71, 48, 11, 23, 7, 8, 2, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 6, 6, 48, 2, 2, 3, 3, 0, 0, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 9, 9, 48, 2, 2, 5, 5, 0, 0, 3, 3)
);

INST_TEST_CASE(SimpleSmall_Regression,
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 16, 16, 32, 16, 16, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 28, 28, 32, 28, 28, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 32, 32, 32, 32, 32, 3, 3, 0, 0, 1, 1)
);
