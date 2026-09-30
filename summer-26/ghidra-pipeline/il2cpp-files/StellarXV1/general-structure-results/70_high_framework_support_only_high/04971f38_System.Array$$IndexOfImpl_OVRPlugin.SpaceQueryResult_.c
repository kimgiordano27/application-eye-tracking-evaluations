/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04971f38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOfImpl<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_092b6308;
  if ((DAT_0988a566 & 1) == 0) {
    FUN_04077588(PTR_DAT_092b6308);
    DAT_0988a566 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


