/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 06ab7b6c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hmdPresent
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  lVar2 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x18) <= (int)(uint)unaff_x21) {
      if (*(char *)(unaff_x19 + 0x58) == '\0') {
        lVar2 = *(long *)(unaff_x19 + 0x70);
        FUN_06a5e4b0(*(undefined8 *)(unaff_x19 + 0x50),0,0);
        in_stack_00000028 = uStack0000000000000008;
        in_stack_00000020 = in_stack_00000000;
        uStack0000000000000030 = uStack0000000000000010;
        if (lVar2 == 0) break;
        *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000014;
        *(ulong *)(lVar2 + 0x20) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
        *(undefined8 *)(lVar2 + 0x1c) = _uStack0000000000000008;
        *(undefined8 *)(lVar2 + 0x14) = in_stack_00000000;
        if (*(long *)(unaff_x19 + 0x50) == 0) break;
        lVar2 = *(long *)(unaff_x19 + 0x70);
        uVar4 = FUN_07a1bb0c(*(long *)(unaff_x19 + 0x50),0);
      }
      else {
        FUN_06a5e4b0(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x50),1,0);
        in_stack_00000068 = in_stack_00000028;
        in_stack_00000060 = in_stack_00000020;
        uStack0000000000000074 = uStack0000000000000034;
        uStack0000000000000070 = uStack0000000000000030;
        uStack0000000000000054 = *(undefined8 *)(unaff_x20 + 0x44);
        in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x30);
        uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
        uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
        uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x38) >> 0x20);
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        FUN_06a70228(&stack0x00000040,&stack0x00000060,*(long *)(unaff_x19 + 0x70) + 0x14,0);
        if (*(long *)(unaff_x19 + 0x50) == 0) break;
        lVar2 = *(long *)(unaff_x19 + 0x70);
        uVar4 = FUN_07a19780(*(long *)(unaff_x19 + 0x50),0);
      }
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x60) = uVar4;
        if (*(long *)(unaff_x19 + 0x70) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x70) + 0x30) = 2;
          return;
        }
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x70) == 0) break;
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x21) {
LAB_06ab7d28:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar1 = *(long *)(param_1 + unaff_x21 * 8 + 0x20);
    if (lVar1 == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x38);
    uVar4 = FUN_07a191d0(lVar1,0);
    if (lVar3 == 0) break;
    unaff_x21 = unaff_x21 + 1;
    if (*(uint *)(lVar3 + 0x18) <= (int)unaff_x21 - 1U) goto LAB_06ab7d28;
    lVar3 = lVar3 + lVar2;
    *(undefined4 *)(lVar3 + 0x20) = uVar4;
    *(int *)(lVar3 + 0x24) = (int)param_3;
    *(undefined4 *)(lVar3 + 0x28) = param_4;
    *(undefined4 *)(lVar3 + 0x2c) = param_5;
    param_1 = *(long *)(unaff_x19 + 0x60);
    lVar2 = lVar2 + 0x10;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


