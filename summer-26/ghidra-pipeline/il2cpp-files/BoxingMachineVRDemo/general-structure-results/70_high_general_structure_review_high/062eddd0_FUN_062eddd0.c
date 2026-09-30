/*
FUNCTION_NAME: FUN_062eddd0
ENTRY_POINT: 062eddd0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


uint FUN_062eddd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((DAT_06b8bdfc & 1) == 0) {
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                );
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s16__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_s16__);
    FUN_02d6084c(PTR_DAT_0676a930);
    DAT_06b8bdfc = 1;
  }
  if (param_1 != 0) {
                    /* try { // try from 062ede80 to 063edf1f has its CatchHandler @ 062ede80
                       catch() { ... } // from try @ 062ede80 with catch @ 062ede80
                       catch() { ... } // from try @ 062edf3c with catch @ 062ede80
                       catch() { ... } // from try @ 062edf64 with catch @ 062ede80
                       catch() { ... } // from try @ 062edf88 with catch @ 062ede80
                       catch() { ... } // from try @ 062edfc8 with catch @ 062ede80 */
    if ((((*(int *)(param_1 + 0x6c) == 9) &&
         (uVar2 = FUN_039136bc(param_1,*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__)
         , (uVar2 & 1) == 0)) &&
        (uVar2 = FUN_039136d4(param_1,*(undefined8 *)
                                       Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                             ), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN_039136c8(param_1,*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s16__),
       (uVar2 & 1) == 0)) {
      uVar1 = FUN_039136e0(param_1,*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_s16__);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


