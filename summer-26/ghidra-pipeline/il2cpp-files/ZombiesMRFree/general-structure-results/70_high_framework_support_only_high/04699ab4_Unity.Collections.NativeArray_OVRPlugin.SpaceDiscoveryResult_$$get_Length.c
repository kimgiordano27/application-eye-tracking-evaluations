/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 04699ab4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (long param_1,long param_2)

{
  ushort in_w9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w23;
  long unaff_x24;
  
  if ((in_w9 & 1) == 0) {
    FUN_02feb2c4(param_1);
    param_1 = *(long *)(unaff_x24 + 0x20);
    in_w9 = *(ushort *)(param_1 + 0x135);
  }
  if ((in_w9 & 1) == 0) {
    FUN_02feb2c4(param_1);
    param_1 = *(long *)(unaff_x24 + 0x20);
    in_w9 = *(ushort *)(param_1 + 0x135);
  }
  if ((in_w9 & 1) == 0) {
    FUN_02feb2c4(param_1);
  }
  FUN_068b42bc(unaff_x20 + unaff_w23 * 0xc,param_2 + unaff_w21 * 0xc,(long)(unaff_w19 * 0xc),0);
  return;
}


