/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 049e2c2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar1 = thunk_FUN_02d9d534();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0(*(long *)(unaff_x19 + 0x20));
  }
  FUN_0504920c(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


