/*
FUNCTION_NAME: FUN_05b1afc0
ENTRY_POINT: 05b1afc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_05b1afc0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong extraout_x1;
  int extraout_var;
  long extraout_x1_00;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  ulong local_38;
  
  local_40 = param_2;
  local_38 = param_3;
  if ((DAT_06bc28dc & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<InteractionAttachController_ComputeAmplifiedOffset_00001192_PostfixBurstDelegate>__
                );
    FUN_02f08768(Method_Mono_Math_BigInteger_op_Multiply__);
    FUN_02f08768(Method_System_IO_BinaryWriter_Write__);
    DAT_06bc28dc = 1;
  }
  FUN_05b1af60(param_1);
  if ((param_3 ^ extraout_x1) >> 0x20 == 0) {
    FUN_05b1af60(param_1);
    puVar1 = Method_System_IO_BinaryWriter_Write__;
    if (0 < extraout_var) {
      uVar5 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar6 = *(undefined8 *)(lVar4 + uVar5 * 8 + 0x20);
        uVar2 = FUN_040499dc(&local_40,uVar5 & 0xffffffff,*(undefined8 *)puVar1);
        uVar3 = FUN_04f6dc3c(uVar6,uVar2,0);
        if ((uVar3 & 1) != 0) goto LAB_05b1b0a0;
        uVar5 = uVar5 + 1;
        FUN_05b1af60(param_1);
      } while ((long)uVar5 < extraout_x1_00 >> 0x20);
    }
  }
  else {
LAB_05b1b0a0:
    uVar2 = FUN_040496cc(&local_40,
                         *(undefined8 *)
                          Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<InteractionAttachController_ComputeAmplifiedOffset_00001192_PostfixBurstDelegate>__
                        );
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    FUN_05b1ac64(param_1);
  }
  return;
}


