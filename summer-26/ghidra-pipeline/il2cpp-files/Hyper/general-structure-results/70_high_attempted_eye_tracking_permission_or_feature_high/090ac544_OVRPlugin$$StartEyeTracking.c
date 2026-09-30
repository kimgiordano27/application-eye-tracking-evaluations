/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 090ac544
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x130);
  if (*(byte *)(*param_2 + 0x130) < bVar1) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
      plVar3 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = plVar3;
  if (*(byte *)(*param_2 + 0x130) < bVar1) {
    param_2 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
    param_2 = (long *)0x0;
  }
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x20),param_2);
  return;
}


