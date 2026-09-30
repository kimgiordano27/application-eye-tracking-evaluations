/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 05ea450c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(long param_1)

{
  ushort uVar1;
  ushort *in_x9;
  long unaff_x20;
  
  uVar1 = *in_x9;
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(param_1);
    param_1 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(param_1);
  }
  FUN_0567191c();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_05ea41f8();
  return;
}


