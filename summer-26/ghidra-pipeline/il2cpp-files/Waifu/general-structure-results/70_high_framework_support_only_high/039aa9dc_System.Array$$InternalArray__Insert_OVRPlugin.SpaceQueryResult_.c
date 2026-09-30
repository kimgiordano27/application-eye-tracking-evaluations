/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 039aa9dc
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0338f618();
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0338f618();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


