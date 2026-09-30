/*
FUNCTION_NAME: OVRPlugin.Media$$GetInitialized
ENTRY_POINT: 07a5d6c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetInitialized(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  uVar6 = param_2._8_8_;
  uVar5 = param_2._0_8_;
  uStack0000000000000088 = param_1._8_8_;
  uStack0000000000000080 = param_1._0_8_;
  do {
    *(undefined8 *)(unaff_x25 + 0x14) = uVar6;
    *(undefined8 *)(unaff_x25 + 0xc) = uVar5;
    do {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07a5ceac();
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == 0x18) {
        return;
      }
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_07a5d668;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a5d668:
      (*(code *)*puVar1)(&stack0x00000080);
    } while ((unaff_x19 & 1) == 0);
    uStack0000000000000074 = *(undefined8 *)(unaff_x25 + 0x14);
    uStack0000000000000068 = (undefined4)uStack0000000000000088;
    in_stack_00000060 = uStack0000000000000080;
    uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x25 + 0xc);
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x25 + 0xc) >> 0x20);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uStack0000000000000028 = uStack0000000000000068;
    in_stack_00000020 = in_stack_00000060;
    uStack0000000000000034 = uStack0000000000000074;
    uStack000000000000002c = uStack000000000000006c;
    uStack0000000000000030 = uStack0000000000000070;
    FUN_07a56f20(&stack0x00000040 + 4,&stack0x00000020);
    uStack0000000000000088 = CONCAT44(uStack0000000000000050,in_stack_00000040._12_4_);
    uVar5 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    uStack0000000000000080 = in_stack_00000040._4_8_;
    uVar6 = in_stack_00000058;
  } while( true );
}


