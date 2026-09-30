/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 051df578
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  int *piVar3;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
code_r0x051df578:
  puVar1 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    (*(code *)*puVar1)(&stack0x00000040);
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    uStack0000000000000070 = uStack0000000000000050;
    if ((unaff_x19 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000030 = uStack0000000000000050;
      FUN_051d9194(&stack0x00000060,&stack0x00000020);
    }
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    uStack0000000000000054 = uStack0000000000000074;
    uStack0000000000000050 = uStack0000000000000070;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_051dedac();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 0x18) {
      return;
    }
    param_1 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x23) {
          in_x9 = (long)*piVar3;
          goto code_r0x051df578;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
  } while( true );
}


