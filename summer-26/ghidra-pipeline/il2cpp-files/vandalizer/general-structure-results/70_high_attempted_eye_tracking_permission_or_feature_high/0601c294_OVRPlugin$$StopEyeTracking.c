/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 0601c294
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(void)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 0601c298 to 0611c4e7 has its CatchHandler @ 0601c298
                       catch() { ... } // from try @ 0601c298 with catch @ 0601c298
                       catch() { ... } // from try @ 0601c580 with catch @ 0601c298
                       catch() { ... } // from try @ 0601c5e0 with catch @ 0601c298
                       catch() { ... } // from try @ 0601c620 with catch @ 0601c298 */
  auVar1 = FUN_0601c6a4();
  FUN_0601c998(auVar1,DAT_014babd4,DAT_014babe8,DAT_014baab8);
  return;
}


