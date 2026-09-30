/*
FUNCTION_NAME: OVRPlugin$$get_suggestedCpuPerfLevel
ENTRY_POINT: 05d12d2c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_suggestedCpuPerfLevel(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x24;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  ulong uStack0000000000000060;
  undefined4 uStack0000000000000068;
  
  *(undefined1 *)(unaff_x24 + 0x852) = in_w8;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  if (*(long *)(unaff_x20 + 0x140) != 0) {
    uVar3 = FUN_05d114a8();
    if ((uVar3 & 1) != 0) {
      return;
    }
    FUN_05cc3570(&stack0x00000020);
    uVar1 = uStack0000000000000030;
    lVar5 = *unaff_x19;
    if (lVar5 != 0) {
      uVar7 = (undefined4)(in_stack_00000020 >> 0x20);
      *(undefined1 *)(lVar5 + 0x10) = 0;
      uVar8 = uStack0000000000000028;
      uVar6 = FUN_05d12e6c(in_stack_00000020 & 0xffffffff,*(undefined8 *)(unaff_x20 + 0x138),
                           &stack0x00000060);
      uVar2 = uStack0000000000000068;
      *(undefined4 *)(lVar5 + 0x3c) = uVar6;
      *(undefined4 *)(lVar5 + 0x40) = uVar7;
      *(undefined4 *)(lVar5 + 0x44) = uVar8;
      uVar3 = uStack0000000000000060 & 0xffffffff;
      uVar8 = uStack0000000000000060._4_4_;
      if (*(int *)(*(long *)PTR_DAT_06f98e20 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06902890(uVar3,uVar8,uVar2,uStack000000000000002c,uVar1,
                   uStack0000000000000034 & 0xffffffff,uStack0000000000000034._4_4_,&stack0x00000040
                   ,0);
      if (*(long *)(unaff_x20 + 200) != 0) {
        lVar5 = *unaff_x19;
        uVar4 = FUN_068f5d7c(*(long *)(unaff_x20 + 200),0);
        FUN_05cc37e4(uVar4,&stack0x00000040,0);
        uStack0000000000000028 = uStack0000000000000008;
        in_stack_00000020 = in_stack_00000000;
        uStack0000000000000030 = uStack0000000000000010;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x34) = uStack0000000000000014;
          *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
          *(undefined8 *)(lVar5 + 0x28) = _uStack0000000000000008;
          *(ulong *)(lVar5 + 0x20) = in_stack_00000000;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


