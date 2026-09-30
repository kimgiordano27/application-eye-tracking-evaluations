/*
FUNCTION_NAME: FUN_062edf64
ENTRY_POINT: 062edf64
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


long FUN_062edf64(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_s32__;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 062edf60 with catch @ 062edf64
                       try { // try from 062edf64 to 063edf83 has its CatchHandler @ 062ede80 */
  puVar1 = Method_System_Net_WebRequestStream_Close_internal__;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 062edf34 with catch @ 062edf68
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 062edf20 with catch @ 062edf6c
                        */
                    /* try { // try from 062edf84 to 063edf87 has its CatchHandler @ 062edfb0 */
                    /* try { // try from 062edf88 to 063edfbf has its CatchHandler @ 062ede80 */
  if ((DAT_06b8be59 & 1) == 0) {
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_s32__);
                    /* catch() { ... } // from try @ 062edf84 with catch @ 062edfb0 */
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_06b8be59 = 1;
  }
                    /* try { // try from 062edfc0 to 063edfc7 has its CatchHandler @ 062edfdc */
                    /* try { // try from 062edfc8 to 063edfd3 has its CatchHandler @ 062ede80 */
  lVar3 = FUN_03dbbce0(param_3,param_4,*(undefined8 *)puVar2);
                    /* try { // try from 062edfd4 to 063edfdb has its CatchHandler @ 062edfdc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 062edfc0 with catch @ 062edfdc
                       catch(type#2 @ 00000000) { ... } // from try @ 062edfd4 with catch @ 062edfdc
                        */
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


