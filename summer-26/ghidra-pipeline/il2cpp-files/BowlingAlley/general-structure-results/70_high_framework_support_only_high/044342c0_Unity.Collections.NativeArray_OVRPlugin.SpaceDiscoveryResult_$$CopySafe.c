/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 044342c0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  ushort uVar1;
  ushort *in_x9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  
  uVar1 = *in_x9;
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(param_1);
    param_1 = *(long *)(unaff_x24 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(param_1);
  }
  FUN_06baa6ec(unaff_x20 + (unaff_w22 << 5),unaff_x23 + (unaff_w21 << 5),(long)(unaff_w19 << 5),0);
  return;
}


