/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 04433c00
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000070 = 0;
  lVar1 = *(long *)(param_3 + 0x20);
  uStack0000000000000040 = param_1;
  uStack0000000000000050 = param_1;
  uStack0000000000000060 = param_1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8(lVar1);
  }
  FUN_0528ca34(&stack0x00000040,param_2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x98));
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90));
  return;
}


