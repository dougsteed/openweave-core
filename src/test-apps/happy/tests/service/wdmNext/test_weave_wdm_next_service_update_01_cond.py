#!/usr/bin/env python


#
#    Copyright (c) 2016-2017 Nest Labs, Inc.
#    All rights reserved.
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#        http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
#

#
#    @file
#       Calls Weave WDM mutual subscribe between mock device and real service.
#       O01: Update: Client send update request to publisher, and receive status report
#

import unittest
from weave_wdm_next_test_service_base import weave_wdm_next_test_service_base


class test_weave_wdm_next_service_update_01_cond(weave_wdm_next_test_service_base):
    def test_weave_wdm_next_service_update_01_cond(self):
        wdm_next_args = {}

        wdm_next_args['wdm_option'] = "mutual_subscribe"
        wdm_next_args['final_client_status'] = 0
        wdm_next_args['enable_client_flip'] = 1
        wdm_next_args['test_client_iterations'] = 2
        wdm_next_args['test_client_delay'] = 15000
        wdm_next_args['client_clear_state_between_iterations'] = False
        wdm_next_args['test_client_case'] = 10 # kTestCase_TestUpdatableTrait_OneTraitConditional
        wdm_next_args['total_client_count'] = 11

        wdm_next_args['client_log_check'] = [('Update: Good Iteration', wdm_next_args['test_client_iterations'] * (wdm_next_args['total_client_count'] - 1) * 4)]

        wdm_next_args['test_tag'] = self.__class__.__name__
        wdm_next_args['test_case_name'] = ['Wdm-NestService-O01: Client creates mutual subscription, send update request to publisher, and receive status report']
        print 'test file: ' + self.__class__.__name__
        print "weave-wdm-next test O01"
        super(test_weave_wdm_next_service_update_01_cond, self).weave_wdm_next_test_service_base(wdm_next_args)


if __name__ == "__main__":
    unittest.main()
