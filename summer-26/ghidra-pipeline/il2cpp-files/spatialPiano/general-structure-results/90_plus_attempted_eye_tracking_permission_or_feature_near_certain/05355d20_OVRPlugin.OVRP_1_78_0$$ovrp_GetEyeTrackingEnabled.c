/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 05355d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__ptr;
  undefined8 uVar3;
  long unaff_x21;
  
  puVar2 = Unity_Burst_FloatMode_TypeInfo;
  if ((*(byte *)(unaff_x21 + 0x8c8) & 1) == 0) {
    FUN_02f08768(Unity_Burst_FloatMode_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9c00);
    *(undefined1 *)(unaff_x21 + 0x8c8) = 1;
  }
  puVar1 = PTR_DAT_067c9c00;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  __ptr = (void *)FUN_05352050(param_1);
  uVar3 = FUN_05355db0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar1);
  }
  free(__ptr);
  return uVar3;
}


