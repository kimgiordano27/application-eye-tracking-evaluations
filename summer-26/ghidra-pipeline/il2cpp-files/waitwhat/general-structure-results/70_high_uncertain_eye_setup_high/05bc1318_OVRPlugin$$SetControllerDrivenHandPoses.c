/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPoses
ENTRY_POINT: 05bc1318
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerDrivenHandPoses(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  long unaff_x24;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f13a0);
    *(undefined1 *)(unaff_x24 + 0xabc) = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x20 + 0x140) != 0) {
    uVar7 = FUN_05bbfc30(unaff_s8,*(undefined4 *)(unaff_x20 + 0xdc));
    if ((uVar7 & 1) != 0) {
      return;
    }
    FUN_05b74e3c((long)&stack0x00000000 + 4);
    uVar5 = uStack000000000000001c;
    uVar4 = uStack0000000000000018;
    uVar3 = uStack0000000000000014;
    uVar2 = uStack0000000000000010;
    lVar9 = *unaff_x19;
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + 0x10) = 0;
      uVar12 = uStack000000000000000c;
      uVar11 = uStack0000000000000008;
      uVar10 = FUN_05bc145c(in_stack_00000000._4_4_,*(undefined8 *)(unaff_x20 + 0x138),
                            &stack0x00000040);
      uVar6 = in_stack_00000048;
      uVar7 = in_stack_00000040;
      puVar1 = PTR_DAT_070f13a0;
      *(undefined4 *)(lVar9 + 0x3c) = uVar10;
      *(undefined4 *)(lVar9 + 0x40) = uVar11;
      *(undefined4 *)(lVar9 + 0x44) = uVar12;
      uVar12 = in_stack_00000040._4_4_;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_069e4d6c(uVar7 & 0xffffffff,uVar12,uVar6,uVar2,uVar3,uVar4,uVar5,&stack0x00000020,0);
      if (*(long *)(unaff_x20 + 200) != 0) {
        lVar9 = *unaff_x19;
        uVar8 = FUN_069d3a80(*(long *)(unaff_x20 + 200),0);
        FUN_05b750b0((long)&stack0x00000000 + 4,uVar8,&stack0x00000020,0);
        if (lVar9 != 0) {
          *(ulong *)(lVar9 + 0x28) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
          *(ulong *)(lVar9 + 0x20) = CONCAT44(uStack0000000000000008,in_stack_00000000._4_4_);
          *(ulong *)(lVar9 + 0x34) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          *(ulong *)(lVar9 + 0x2c) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


