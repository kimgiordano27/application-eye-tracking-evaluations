/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 05be5798
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  long in_x9;
  long in_x10;
  undefined8 uVar2;
  uint in_w11;
  long in_x12;
  uint in_w13;
  uint in_w14;
  uint in_w15;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  *(int *)(in_x12 + 0x24) = (int)param_3;
  if ((((((in_w11 < 3) || (*(undefined1 *)(in_x9 + 0x22) = 1, in_w13 < 3)) ||
        (*(byte *)(in_x10 + 0x22) = (byte)(in_w15 >> 4) & 1, in_w14 < 3)) ||
       ((*(undefined4 *)(in_x12 + 0x28) = param_2, in_w11 == 3 ||
        (*(undefined1 *)(in_x9 + 0x23) = 1, in_w13 == 3)))) ||
      ((*(undefined1 *)(in_x10 + 0x23) = 0, in_w14 == 3 ||
       ((*(undefined4 *)(in_x12 + 0x2c) = 0, in_w11 < 5 ||
        (*(undefined1 *)(in_x9 + 0x24) = 1, in_w13 < 5)))))) ||
     (*(undefined1 *)(in_x10 + 0x24) = 0, in_w14 < 5)) {
LAB_05be59f0:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
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
  lVar1 = *(long *)(unaff_x19 + 0x68);
  if (lVar1 != 0) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) {
        if (*(char *)(unaff_x19 + 0x60) == '\0') {
          lVar1 = *(long *)(unaff_x19 + 0x80);
          FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x50),0,0);
          if (lVar1 == 0) break;
          *(ulong *)(lVar1 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
          *(undefined8 *)(lVar1 + 0x14) = in_stack_00000000._4_8_;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
          *(ulong *)(lVar1 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          if (*(long *)(unaff_x19 + 0x50) == 0) break;
          lVar1 = *(long *)(unaff_x19 + 0x80);
          uVar6 = FUN_069e9470(*(long *)(unaff_x19 + 0x50),0);
        }
        else {
          FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x50),1,0);
          in_stack_00000040 = in_stack_00000000._4_8_;
          uStack0000000000000054 = in_stack_00000018;
          in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x30);
          uStack0000000000000048 = in_stack_00000000._12_4_;
          uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x44);
          uStack000000000000004c = uStack0000000000000010;
          uStack0000000000000050 = uStack0000000000000014;
          uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
          uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0x3c);
          uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
          if (*(long *)(unaff_x19 + 0x80) == 0) break;
          FUN_05b5ed20(&stack0x00000020,&stack0x00000040,*(long *)(unaff_x19 + 0x80) + 0x14,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) break;
          lVar1 = *(long *)(unaff_x19 + 0x80);
          uVar6 = FUN_069e7708(*(long *)(unaff_x19 + 0x50),0);
        }
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x60) = uVar6;
          if (*(long *)(unaff_x19 + 0x80) != 0) {
            *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
            return;
          }
        }
        break;
      }
      if (*(long *)(unaff_x19 + 0x80) == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) goto LAB_05be59f0;
      lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
      if (lVar1 == 0) break;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
      uVar6 = FUN_069e7314(lVar1,0);
      if (lVar5 == 0) break;
      lVar3 = lVar3 + 1;
      if (*(uint *)(lVar5 + 0x18) <= (int)lVar3 - 1U) goto LAB_05be59f0;
      lVar5 = lVar5 + lVar4;
      lVar4 = lVar4 + 0x10;
      *(undefined4 *)(lVar5 + 0x20) = uVar6;
      *(int *)(lVar5 + 0x24) = (int)param_3;
      *(int *)(lVar5 + 0x28) = (int)param_4;
      *(undefined4 *)(lVar5 + 0x2c) = param_5;
      lVar1 = *(long *)(unaff_x19 + 0x68);
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


