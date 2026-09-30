/*
FUNCTION_NAME: FUN_06a39014
ENTRY_POINT: 06a39014
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a39014(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0727fcd8;
  if ((DAT_076e2b50 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fcd8);
    thunk_FUN_032e1da0(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    DAT_076e2b50 = 1;
  }
  puVar2 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06a39080(param_1,*(undefined8 *)puVar2);
  return;
}


