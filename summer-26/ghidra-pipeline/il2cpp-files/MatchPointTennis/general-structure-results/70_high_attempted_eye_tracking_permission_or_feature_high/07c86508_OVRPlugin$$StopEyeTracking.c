/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 07c86508
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(long param_1)

{
  long *plVar1;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x28),plVar1);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x30));
  return;
}


