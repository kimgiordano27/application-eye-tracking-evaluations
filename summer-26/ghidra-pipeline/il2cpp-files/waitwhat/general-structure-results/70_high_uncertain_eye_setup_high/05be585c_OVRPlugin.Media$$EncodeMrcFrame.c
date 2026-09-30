/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 05be585c
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


void OVRPlugin_Media__EncodeMrcFrame
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  undefined4 uVar3;
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
  
  do {
    if (in_w10 <= (uint)unaff_x21) {
LAB_05be59f0:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar1 = *(long *)(param_1 + unaff_x21 * 8 + 0x20);
    if (lVar1 == 0) goto LAB_05be58ac;
    lVar2 = *(long *)(in_x9 + 0x38);
    uVar3 = FUN_069e7314(lVar1,0);
    if (lVar2 == 0) goto LAB_05be58ac;
    unaff_x21 = unaff_x21 + 1;
    if (*(uint *)(lVar2 + 0x18) <= (int)unaff_x21 - 1U) goto LAB_05be59f0;
    lVar2 = lVar2 + unaff_x22;
    unaff_x22 = unaff_x22 + 0x10;
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
    *(int *)(lVar2 + 0x24) = (int)param_3;
    *(int *)(lVar2 + 0x28) = (int)param_4;
    *(undefined4 *)(lVar2 + 0x2c) = param_5;
    param_1 = *(long *)(unaff_x19 + 0x68);
    if (param_1 == 0) goto LAB_05be58ac;
    in_w10 = *(uint *)(param_1 + 0x18);
    if ((int)in_w10 <= (int)unaff_x21) {
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        lVar1 = *(long *)(unaff_x19 + 0x80);
        FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x50),0,0);
        if (lVar1 == 0) goto LAB_05be58ac;
        *(ulong *)(lVar1 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *(undefined8 *)(lVar1 + 0x14) = in_stack_00000000._4_8_;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
        *(ulong *)(lVar1 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_05be58ac;
        lVar1 = *(long *)(unaff_x19 + 0x80);
        uVar3 = FUN_069e9470(*(long *)(unaff_x19 + 0x50),0);
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
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_05be58ac;
        FUN_05b5ed20(&stack0x00000020,&stack0x00000040,*(long *)(unaff_x19 + 0x80) + 0x14,0);
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_05be58ac;
        lVar1 = *(long *)(unaff_x19 + 0x80);
        uVar3 = FUN_069e7708(*(long *)(unaff_x19 + 0x50),0);
      }
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x60) = uVar3;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
          return;
        }
      }
      goto LAB_05be58ac;
    }
    in_x9 = *(long *)(unaff_x19 + 0x80);
    if (in_x9 == 0) {
LAB_05be58ac:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  } while( true );
}


