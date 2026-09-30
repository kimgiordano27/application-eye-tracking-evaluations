/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 06108a6c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined4 unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_03642964();
  *(undefined1 *)(unaff_x23 + 0x3b8) = 1;
  puVar1 = PTR_DAT_079f8730;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  __ptr = (void *)FUN_061019e8();
  uVar2 = FUN_06108ae0(__ptr,unaff_w20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


