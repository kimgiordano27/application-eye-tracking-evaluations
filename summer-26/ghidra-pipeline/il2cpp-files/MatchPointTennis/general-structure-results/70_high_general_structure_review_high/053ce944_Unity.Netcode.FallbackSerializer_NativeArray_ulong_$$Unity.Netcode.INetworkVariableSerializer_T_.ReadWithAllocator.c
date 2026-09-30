/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.ReadWithAllocator
ENTRY_POINT: 053ce944
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


undefined8
Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_ReadWithAllocator
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_04481fb8(lVar2);
    }
    lVar2 = thunk_FUN_04485110();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
        thunk_FUN_04485360();
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8(lVar2);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
          thunk_FUN_04485360();
                    /* WARNING: Could not recover jumptable at 0x053cea1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
  }
  FUN_07a5f008(2,0);
  return 0;
}


