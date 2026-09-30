/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 05473b54
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uVar1 = thunk_FUN_0301080c();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05b32c00(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  thunk_FUN_03048534(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


