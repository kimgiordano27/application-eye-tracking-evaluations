/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 07a6e384
PROGRAM: StellarXV1-libil2cpp.so
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
  undefined8 uVar1;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x21 + 0xc38);
  FUN_076d5104((long)*(int *)(unaff_x19 + 0x18));
  uVar1 = FUN_07a6e3dc();
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*plVar2);
  }
  free(unaff_x20);
  return uVar1;
}


