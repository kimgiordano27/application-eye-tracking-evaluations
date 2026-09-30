/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 07414bc0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e80830);
  *(undefined1 *)(unaff_x21 + 0xf50) = 1;
  puVar1 = PTR_DAT_08e80830;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  __ptr = (void *)FUN_0740f4a0();
  uVar2 = FUN_07414c34();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


