/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 074a3034
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(void)

{
  void *__ptr;
  undefined8 uVar1;
  int in_w8;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  __ptr = (void *)FUN_074a3564();
  FUN_074b2568();
  uVar1 = FUN_074a3090();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03db619c(*unaff_x21);
  }
  free(__ptr);
  return uVar1;
}


