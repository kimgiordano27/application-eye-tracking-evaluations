/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 051df5fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureData(undefined1 param_1 [16])

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar6;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
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
  
  uVar6 = param_1._0_8_;
  uVar1 = param_1._8_4_;
  do {
    uStack0000000000000008 = uVar1;
    uStack0000000000000014 = uStack0000000000000054;
    uStack0000000000000010 = uStack0000000000000050;
    uStack0000000000000000 = uVar6;
    FUN_051dedac();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 0x18) {
      return;
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051df580;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051df580:
    (*(code *)*puVar2)(&stack0x00000040);
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
    uVar6 = in_stack_00000060;
    uVar1 = in_stack_00000068;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  } while( true );
}


