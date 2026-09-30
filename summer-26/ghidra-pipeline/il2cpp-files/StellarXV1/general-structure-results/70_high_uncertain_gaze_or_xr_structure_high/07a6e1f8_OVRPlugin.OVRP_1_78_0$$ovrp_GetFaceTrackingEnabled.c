/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 07a6e1f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__ptr;
  
  puVar2 = PTR_DAT_092f0ea0;
  if ((DAT_09895718 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0ea0);
    FUN_04077588(PTR_DAT_092acc38);
    DAT_09895718 = 1;
  }
  puVar1 = PTR_DAT_092acc38;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  __ptr = (void *)FUN_07a6cd4c(param_1);
  FUN_07a6e290(__ptr,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  free(__ptr);
  return;
}


