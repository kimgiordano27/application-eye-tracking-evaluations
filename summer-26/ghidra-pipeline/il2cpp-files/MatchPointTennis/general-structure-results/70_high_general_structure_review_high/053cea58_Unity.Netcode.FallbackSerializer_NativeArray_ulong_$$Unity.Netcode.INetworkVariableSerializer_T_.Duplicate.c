/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.Duplicate
ENTRY_POINT: 053cea58
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


long Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_Duplicate
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_04456600();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = FUN_053ceb24(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_04456600();
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    **(long **)(lVar2 + 0xb8) = lVar1;
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    thunk_FUN_044bb4b4(*(undefined8 *)(lVar2 + 0xb8),lVar1);
  }
  return lVar1;
}


