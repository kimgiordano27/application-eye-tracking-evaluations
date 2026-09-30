/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04b170ac
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


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (ushort *param_1)

{
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000068;
  
  if ((*param_1 & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_0671191c();
  memcpy(&stack0x00000008,unaff_x22,0x48);
  thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
  FUN_0759321c();
  FUN_065f131c();
  return;
}


