/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01f0939c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 01f093a8 to 0200949f has its CatchHandler @ 01f093a8
                       catch() { ... } // from try @ 01f093a8 with catch @ 01f093a8
                       catch() { ... } // from try @ 01f094ac with catch @ 01f093a8 */
    lVar2 = FUN_01dde7f8(lVar2);
  }
  uVar1 = thunk_FUN_01de27b8(lVar2);
  FUN_028bfa60();
  return uVar1;
}


