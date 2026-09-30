/*
FUNCTION_NAME: FUN_062f17dc
ENTRY_POINT: 062f17dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long FUN_062f17dc(float param_1,float param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_s32__;
  puVar1 = Method_System_Net_WebRequestStream_Close_internal__;
  if ((DAT_06b8be58 & 1) == 0) {
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_s32__);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_06b8be58 = 1;
  }
  lVar3 = FUN_03dbbce0(0,param_3,*(undefined8 *)puVar2);
                    /* try { // try from 062f1844 to 063f193f has its CatchHandler @ 062f1844
                       catch() { ... } // from try @ 062f1844 with catch @ 062f1844
                       catch() { ... } // from try @ 062f195c with catch @ 062f1844
                       catch() { ... } // from try @ 062f19e0 with catch @ 062f1844
                       catch() { ... } // from try @ 062f19ec with catch @ 062f1844
                       catch() { ... } // from try @ 062f1a84 with catch @ 062f1844 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  if (param_1 * param_1 + param_2 * param_2 < DAT_012083e8) {
    uVar4 = 0;
  }
  else if (ABS(param_2) < ABS(param_1)) {
    uVar4 = 3;
    if (param_1 <= 0.0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 4;
    if (0.0 < param_2) {
      uVar4 = 2;
    }
  }
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x6c) = uVar4;
    *(float *)(lVar3 + 0x70) = param_1;
    *(float *)(lVar3 + 0x74) = param_2;
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


