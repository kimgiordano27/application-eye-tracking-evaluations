/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 060e1820
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined1 *param_4)

{
                    /* try { // try from 060e1828 to 061e184f has its CatchHandler @ 060e1a54 */
  if (DAT_07ee0bc8 == (code *)0x0) {
    DAT_07ee0bc8 = (code *)thunk_FUN_036800c0();
                    /* try { // try from 060e188c to 061e18b7 has its CatchHandler @ 060e1a50 */
  }
  (*DAT_07ee0bc8)(param_1,param_2,param_3 & 1);
  *param_4 = 0;
  return;
}


