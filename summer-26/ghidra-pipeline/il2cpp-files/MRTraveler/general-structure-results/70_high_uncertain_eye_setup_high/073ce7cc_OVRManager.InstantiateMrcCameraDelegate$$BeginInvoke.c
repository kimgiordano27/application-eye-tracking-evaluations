/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 073ce7cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__BeginInvoke(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  
  if (param_1 != 0) {
    uVar4 = FUN_073ccf2c();
    if ((uVar4 & 1) != 0) {
      return;
    }
    FUN_0737eff4(&stack0x00000020);
    uVar1 = uStack0000000000000030;
    lVar6 = *unaff_x19;
    if (lVar6 != 0) {
      uVar8 = (undefined4)(in_stack_00000020 >> 0x20);
      *(undefined1 *)(lVar6 + 0x10) = 0;
      uVar9 = uStack0000000000000028;
      uVar7 = FUN_073ce8f0(in_stack_00000020 & 0xffffffff,*(undefined8 *)(unaff_x20 + 0x138),
                           &stack0x00000060);
      uVar3 = in_stack_00000068;
      uVar2 = uStack0000000000000060;
      *(undefined4 *)(lVar6 + 0x3c) = uVar7;
      *(undefined4 *)(lVar6 + 0x40) = uVar8;
      *(undefined4 *)(lVar6 + 0x44) = uVar9;
      if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085e9668(uVar2,uStack0000000000000064,uVar3,uStack000000000000002c,uVar1,
                   uStack0000000000000034 & 0xffffffff,uStack0000000000000034._4_4_,&stack0x00000040
                   ,0);
      if (*(long *)(unaff_x20 + 200) != 0) {
        lVar6 = *unaff_x19;
        uVar5 = FUN_085dbb5c(*(long *)(unaff_x20 + 200),0);
        FUN_0737f268(uVar5,&stack0x00000040,0);
        uStack0000000000000028 = uStack0000000000000008;
        in_stack_00000020 = in_stack_00000000;
        uStack0000000000000030 = uStack0000000000000010;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x34) = uStack0000000000000014;
          *(ulong *)(lVar6 + 0x2c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
          *(undefined8 *)(lVar6 + 0x28) = _uStack0000000000000008;
          *(ulong *)(lVar6 + 0x20) = in_stack_00000000;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


