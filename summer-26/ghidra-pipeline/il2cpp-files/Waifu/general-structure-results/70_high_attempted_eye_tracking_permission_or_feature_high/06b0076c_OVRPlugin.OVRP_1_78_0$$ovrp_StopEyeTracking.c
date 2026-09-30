/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 06b0076c
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(code *param_1)

{
  long unaff_x24;
  
  if (param_1 == (code *)0x0) {
                    /* try { // try from 06b00780 to 06c00783 has its CatchHandler @ 06b007a4 */
                    /* try { // try from 06b00788 to 06c0078b has its CatchHandler @ 06b007a0 */
                    /* try { // try from 06b0078c to 06c0078f has its CatchHandler @ 06b0079c */
                    /* try { // try from 06b00790 to 06c00793 has its CatchHandler @ 06b00798 */
                    /* try { // try from 06b00794 to 06c007b7 has its CatchHandler @ 06b00698 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b00790 with catch @ 06b00798
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b0078c with catch @ 06b0079c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b00788 with catch @ 06b007a0
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b00780 with catch @ 06b007a4
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06b0075c with catch @ 06b007a8
                        */
    param_1 = (code *)FUN_03398d30();
    *(code **)(unaff_x24 + 0x908) = param_1;
  }
                    /* try { // try from 06b007b8 to 06c007bb has its CatchHandler @ 06b007d8 */
                    /* try { // try from 06b007bc to 06c007df has its CatchHandler @ 06b00698 */
  (*param_1)();
  return;
}


