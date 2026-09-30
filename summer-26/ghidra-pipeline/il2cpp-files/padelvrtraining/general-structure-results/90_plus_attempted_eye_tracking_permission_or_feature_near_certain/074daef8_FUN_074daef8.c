/*
FUNCTION_NAME: FUN_074daef8
ENTRY_POINT: 074daef8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_074daef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_09223d10;
  if ((DAT_09847bed & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223d10);
    DAT_09847bed = 1;
  }
  FUN_071bc31c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x18),uVar2);
  return;
}


