/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 069500e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x130);
  if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
      plVar3 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = plVar3;
  if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
    unaff_x20 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
    unaff_x20 = (long *)0x0;
  }
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20),unaff_x20);
  return;
}


