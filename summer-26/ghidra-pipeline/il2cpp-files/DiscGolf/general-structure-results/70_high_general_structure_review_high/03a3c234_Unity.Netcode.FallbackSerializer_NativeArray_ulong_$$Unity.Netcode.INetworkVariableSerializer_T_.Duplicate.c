/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.Duplicate
ENTRY_POINT: 03a3c234
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_Duplicate
                 (undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x24;
  
  uVar3 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054f73b4(uVar3,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  plVar1 = (long *)FUN_05529ba8(uVar3);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar1);
    }
  }
  return plVar1;
}


