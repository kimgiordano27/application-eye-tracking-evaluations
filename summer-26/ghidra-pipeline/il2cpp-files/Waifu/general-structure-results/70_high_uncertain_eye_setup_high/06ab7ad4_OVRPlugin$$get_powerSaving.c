/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 06ab7ad4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_powerSaving
               (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  long in_x9;
  long in_x10;
  undefined8 uVar2;
  uint in_w11;
  long in_x12;
  uint in_w13;
  uint in_w14;
  uint in_w15;
  undefined1 in_w16;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  
  *(undefined1 *)(in_x9 + 0x22) = in_w16;
  if (((((!in_CY || in_ZR) || (*(byte *)(in_x10 + 0x22) = (byte)(in_w15 >> 4) & 1, in_w14 < 3)) ||
       (*(undefined4 *)(in_x12 + 0x28) = param_2, in_w11 < 4)) ||
      ((*(undefined1 *)(in_x9 + 0x23) = 1, in_w13 < 4 ||
       (*(undefined1 *)(in_x10 + 0x23) = 0, in_w14 < 4)))) ||
     ((*(undefined4 *)(in_x12 + 0x2c) = 0, in_w11 < 5 ||
      ((*(undefined1 *)(in_x9 + 0x24) = 1, in_w13 < 5 ||
       (*(undefined1 *)(in_x10 + 0x24) = 0, in_w14 < 5)))))) {
LAB_06ab7d28:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  *(undefined4 *)(in_x12 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x80) = 2;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(param_1 + 0x74) = uVar2;
  *(undefined8 *)(param_1 + 0x6c) = uVar8;
  *(undefined8 *)(param_1 + 100) = uVar7;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  if (lVar1 != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) {
        if (*(char *)(unaff_x19 + 0x58) == '\0') {
          lVar1 = *(long *)(unaff_x19 + 0x70);
          FUN_06a5e4b0(*(undefined8 *)(unaff_x19 + 0x50),0,0);
          in_stack_00000028 = uStack0000000000000008;
          in_stack_00000020 = in_stack_00000000;
          uStack0000000000000030 = uStack0000000000000010;
          if (lVar1 == 0) break;
          *(undefined8 *)(lVar1 + 0x28) = uStack0000000000000014;
          *(ulong *)(lVar1 + 0x20) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
          *(undefined8 *)(lVar1 + 0x1c) = _uStack0000000000000008;
          *(undefined8 *)(lVar1 + 0x14) = in_stack_00000000;
          if (*(long *)(unaff_x19 + 0x50) == 0) break;
          lVar1 = *(long *)(unaff_x19 + 0x70);
          uVar6 = FUN_07a1bb0c(*(long *)(unaff_x19 + 0x50),0);
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
          lVar1 = *(long *)(unaff_x19 + 0x70);
          uVar6 = FUN_07a19780(*(long *)(unaff_x19 + 0x50),0);
        }
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x60) = uVar6;
          if (*(long *)(unaff_x19 + 0x70) != 0) {
            *(undefined4 *)(*(long *)(unaff_x19 + 0x70) + 0x30) = 2;
            return;
          }
        }
        break;
      }
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) goto LAB_06ab7d28;
      lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
      if (lVar1 == 0) break;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x38);
      uVar6 = FUN_07a191d0(lVar1,0);
      if (lVar5 == 0) break;
      lVar3 = lVar3 + 1;
      if (*(uint *)(lVar5 + 0x18) <= (int)lVar3 - 1U) goto LAB_06ab7d28;
      lVar5 = lVar5 + lVar4;
      *(undefined4 *)(lVar5 + 0x20) = uVar6;
      *(int *)(lVar5 + 0x24) = (int)param_3;
      *(undefined4 *)(lVar5 + 0x28) = param_4;
      *(undefined4 *)(lVar5 + 0x2c) = param_5;
      lVar1 = *(long *)(unaff_x19 + 0x60);
      lVar4 = lVar4 + 0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


